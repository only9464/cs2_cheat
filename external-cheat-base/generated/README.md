# generated/ — 运行时偏移量

这个目录原先只放三个由 [cs2-dumper](https://github.com/a2x/cs2-dumper) 生成的
C++ 头文件，里面是 `constexpr std::ptrdiff_t` 形式的**编译期常量偏移**。现在它们
改成在**运行时**从 cs2-dumper 的 JSON 载荷里查表：同样的符号名、同样的
namespace 层级、同样的表达式写法（`modBase + dwEntityList`），但值来自网络或本地
载荷，而不是烧进 exe 的字面量。

三个生成头文件的**字面量被保留下来**，作为 `original()` 的返回值——用来交叉校验、
打印 "dump 时 → 现在" 的变化，以及离线单元测试。

## 数据来源

| 文件 | 上游 JSON | 用途 |
| --- | --- | --- |
| `offsets.hpp` | `output/offsets.json` | 模块基址偏移（client.dll / engine2.dll / …） |
| `buttons.hpp` | `output/buttons.json` | `+attack`、`+jump` 等按钮绑定偏移 |
| `client_dll.hpp` | `output/client_dll.json` | 542 个类的字段偏移 + 14 个枚举 |

默认地址：`https://raw.githubusercontent.com/a2x/cs2-dumper/main/output/`。
只允许 HTTPS，且主机名必须在 `FetchPolicy::allowedHosts` 白名单里（默认
`raw.githubusercontent.com`），重定向一律拒绝——防止载荷被引到别的源。

## 这一步解决了什么

静态偏移的失效方式是**安静的**：cs2 更新后旧偏移照样能读，读到的是别的字段。
在此之前，项目靠每小时一次的 GitHub Actions 工作流重新 dump 并提交新的头文件，
也就是说"偏移是否正确"取决于 CI 有没有跑。改成运行时拉取后，进程启动时拿到的
就是上游当前的值；拿不到就**拒绝启动**，不会退回到字面量偷偷跑下去。

## 目录结构

| 文件 | 作用 |
| --- | --- |
| `offsets.hpp` / `buttons.hpp` / `client_dll.hpp` | 由 cs2-dumper 生成的符号表，已转成 `dumper_constant` |
| `offsets_runtime.hpp` | 符号注册表：`dumper_constant`、按类继承链查找、诊断 |
| `dumper_json.hpp` | 零依赖、单遍 SAX 的 JSON 解析器（严格 RFC 8259） |
| `offsets_http.hpp` | WinHTTP 传输层，带主机白名单、超时与重试 |
| `offsets_fetch.hpp` | 编排：本地目录 / 缓存 / 网络、必需符号校验、落盘缓存 |
| `tests/` | 离线 fixture 与断言程序（不联网） |
| `tools/` | 转换器、测试驱动、严格编译驱动 |

所有实现都是 header-only：新增文件不需要改 `external-cheat-base.vcxproj` 或
`Dockerfile`，只要 include 路径 `external-cheat-base/generated` 还在。

## 载荷是怎么拿到的

`cs2_dumper::fetch::initialize()` 按顺序尝试四个来源，**第一个可用者胜出**：

1. **本地目录** —— `CS2_OFFSETS_DIR` 或 `Options::localDirectory`。
   显式指定的目录**失败即硬失败**，不会回退到网络。
2. **新鲜缓存** —— `%LOCALAPPDATA%\cs2-cheat\cs2-dumper`，默认 6 小时内算新鲜，
   新鲜时完全不打网络。
3. **网络** —— 按上面的顺序下载三个 JSON，成功后写入缓存。
4. **过期缓存** —— 网络失败时，过期的缓存也比不启动强。

拿到载荷后会做一次**必需符号校验**：项目真正读取的那十几个符号必须在载荷里
存在，否则整体拒绝。这一步是"新 dump 少了我们依赖的字段"的兜底——那种情况下
程序会带着明确的错误信息退出，而不是拿 0 偏移去读内存。

## 配置

全部通过环境变量，代码里不需要改默认值：

| 变量 | 作用 |
| --- | --- |
| `CS2_OFFSETS_DIR` | 用本地目录里的三个 JSON，不走网络（离线开发用） |
| `CS2_OFFSETS_CACHE` | 覆盖缓存目录 |
| `CS2_OFFSETS_NO_CACHE` | 置位后不读也不写缓存 |
| `CS2_OFFSETS_OFFLINE` | 置位后完全不打网络 |
| `CS2_OFFSETS_BASE_URL` | 覆盖载荷地址（镜像 / 自建源） |
| `CS2_OFFSETS_VERBOSE` | 置位后把解析过程写到调试输出 |

完全离线跑一次：

```powershell
# 假设 D:\cs2-dumper\output 里有 offsets.json / buttons.json / client_dll.json
$env:CS2_OFFSETS_DIR = 'D:\cs2-dumper\output'
.\external-cheat-base\x64\Release\external-cheat-base.exe
```

## 直接读一个偏移

调用点和改造前完全一样，不需要加 `()` 或其它标记：

```cpp
const std::uintptr_t moduleBase = memory::GetModuleBase("client.dll");
const std::uintptr_t entityList = memory::Read<std::uintptr_t>(
    moduleBase + cs2_dumper::offsets::client_dll::dwEntityList);
const std::uintptr_t team = memory::Read<std::int32_t>(
    entity + cs2_dumper::schemas::client_dll::C_BaseEntity::m_iTeamNum);
```

需要显式取值时用 `.value()`（查不到则返回字面量）或 `.is_resolved()`（真的去查表，
返回布尔）。`dumper_constant` **只提供一个转换运算符** `operator std::ptrdiff_t()`：
多给几个（`uint64_t`、`uint32_t` …）会让 `uintptr_t + 字段` 变成二义调用，因为每个
内置 `operator+(unsigned long long, X)` 都能通过不同的用户转换到达。

字段查找会沿 `parent` 链向上回溯（JSON 只记录每个类**自己**的字段，而生成头文件
里是扁平化后的名字）。回溯最多 32 层，遇到环或缺类就停止并报告未解析。

## 维护这几个头文件

`tools/dump_offset_tables.py` 负责把新 dump 的静态头文件转成运行时形式：

```bash
python generated/tools/dump_offset_tables.py --check     # 是否还需要转换
python generated/tools/dump_offset_tables.py             # 就地转换
python generated/tools/dump_offset_tables.py --verify    # 拿线上载荷逐条核对字面量
python generated/tools/dump_offset_tables.py --print     # 只打印，不写盘
```

`--verify` 是这里唯一会联网的检查，它证明**每一个字面量**都和上游当前值一致。
模块名取自 namespace（`engine2_dll` → `engine2.dll`）而不是 `// Module:` 注释：
offsets 头文件只在第一个模块前打印一次注释，照抄注释会把后面所有模块都标成
`client.dll`，从而在运行时解析到一个看似合理但完全错误的地址。

## 测试

```bash
python generated/tools/test_generated.py       # 离线：头文件状态 + 模块归属 + fixture 断言
python generated/tools/compile_strict.py       # 用 Dockerfile 的严格标志编译全部 Windows 源文件
python generated/tools/dump_offset_tables.py --verify   # 联网：字面量 vs 上游
```

`test_generated.py` 编译 `tests/offsets_tests.cpp` 并喂给 13 个离线用例，覆盖 JSON
解析器、主机白名单、四种载荷来源、继承链查找、缺符号/坏 JSON 的失败路径，以及
生成头文件里字面量和类名的正确性。**它不联网**：载荷来自 `tests/fixtures/`。

它还会编译并运行 `tests/localisation_tests.cpp`，这个程序检查界面中文有没有被正确编译：
① `"烟"` 的字节必须是 `E7 83 9F`（被转成 GBK 会是 `D1 CC`）；② 约 190 条界面文案逐条
断言是合法 UTF-8，且每个码点都落在 `sdl_renderer.cpp` 里 `interfaceGlyphRanges()` 请求的
字形范围内 —— 落在范围外只会渲染成空白方块，不会报任何错，所以必须由测试兜住。

`compile_strict.py` 复刻 `Dockerfile` 里那段 `RUN set -eu; for source in …`，用同一组
`-Wall -Wextra -Wpedantic -Werror` 编译同样的 9 个源文件，这样在没有 Docker 的机器上
也能先发现会让 CI 失败的告警。

## 界面是中文的：字体与字符集

覆盖层（菜单、启动等待窗口、游戏内屏幕文字）是中文界面，这带来两个容易踩的坑。

**一、必须有能画汉字的字体。** ImGui 自带的 `AddFontDefaultVector()` 只有 ASCII，
所以 `src/core/renderer/sdl_renderer.cpp` 会在创建上下文后从系统字体里合并一份中文字形，
按顺序探测：环境变量 `CS2_UI_FONT` 指定的路径 → `%WINDIR%\Fonts\Deng.ttf`（等线）→
`msyh.ttc`（微软雅黑）→ `msyh.ttf` → `simhei.ttf`（黑体）→ `simsun.ttc`（宋体）。
全部失败时退回纯 ASCII 字体：界面显示为方块，但程序照常运行。

请求的字形范围是手工枚举的（ASCII、Latin-1、破折号/弯引号、箭头、CJK 标点与假名、
`U+4E00–U+9FA5`、全角形式），约 2600 个字形。**不要**改成
`GetGlyphRangesChineseFull()`：那是约 21000 个字形，字体图集会有几百 MB。
改了这个范围就要同步改 `tests/localisation_tests.cpp` 里的 `coveredByFontRanges()`。

**二、源码与执行字符集都必须是 UTF-8。** 少了这一步，编译器会拿系统 ANSI 代码页
去解释源文件、再按该代码页生成窄字面量，于是编译毫无怨言、界面全是乱码：

- `external-cheat-base/external-cheat-base.vcxproj` —— 两个 `<ClCompile>` 段各加了
  `<AdditionalOptions>/utf-8 %(AdditionalOptions)</AdditionalOptions>`。
- `Dockerfile` —— 编译段加了 `-finput-charset=UTF-8 -fexec-charset=UTF-8`。
  这一对**必须成对出现**：GCC 只给 `-fexec-charset` 会拒绝自己去推断输入字符集。
- `tools/compile_strict.py` 与 `tools/test_generated.py` 的 `FLAGS`/`STRICT_FLAGS` 同步加了
  这两个开关，否则本机验证的编译条件与 Docker 实际条件不一致，验证就失去意义。

刻意保留英文的部分：按键名（`GetKeyName()` 的返回值）、技术缩写（ESP、FOV、Steam ID、
LAN、WSS、HTTP、C4、FPS、RPM、P95/P99、SDL、ImGui）、武器专名
（`src/utils/weapon_names.hpp` 的 `weaponMap`）、INI 持久化键名、以及所有 `##XXX` 控件 ID
（这些是 ImGui 的控件标识，改了会丢失用户已保存的窗口位置与设置）。

## 需要源文件夹之外的两处改动

改造范围刻意限制在 `generated/` 内，但有两处必须动，都是最小改动：

- `src/main.cpp` —— 启动早期调用 `cs2_dumper::fetch::initialize()`；失败就把错误
  交给 `showFatalError()` 并 `return -1`，绝不带着未解析的偏移继续。
- `src/core/memory/game_layout.hpp` —— `spottedFlagOffset()` 与
  `boneArrayPointerOffset()` 从 `constexpr` 改成 `inline`。它们读的是生成常量，
  不再是常量表达式了；两个调用点本来就在运行时求值。
