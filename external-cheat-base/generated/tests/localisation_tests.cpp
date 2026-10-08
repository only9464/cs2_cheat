// Verifies that localised interface text reaches the binary as UTF-8 bytes.
//
// This is the failure a successful compile cannot catch: with the wrong source
// or execution charset the compiler happily emits the system code page (GBK on
// a Chinese Windows, cp1252 elsewhere) and the overlay shows mojibake. The test
// re-declares the same literals the GUI uses and asserts their bytes.
//
// It also checks that every Chinese character appearing in the interface falls
// inside the glyph ranges the font loader requests; a character outside them
// renders as a blank box even though the text itself is correct.

#include <cstdint>
#include <cstdio>
#include <string>
#include <string_view>
#include <vector>

namespace {

int failures = 0;
int checks = 0;

void check(bool condition, const char* what)
{
    ++checks;
    if (!condition) {
        ++failures;
        std::printf("  FAIL %s\n", what);
    }
}

// Decodes one UTF-8 code point, advancing the view. Returns 0 on malformed
// input so a bad literal fails loudly instead of being skipped.
std::uint32_t nextCodePoint(std::string_view& text)
{
    if (text.empty()) {
        return 0;
    }
    const auto byte = static_cast<unsigned char>(text.front());
    std::size_t length = 0;
    std::uint32_t value = 0;
    if (byte < 0x80) {
        length = 1;
        value = byte;
    } else if ((byte & 0xE0) == 0xC0) {
        length = 2;
        value = byte & 0x1F;
    } else if ((byte & 0xF0) == 0xE0) {
        length = 3;
        value = byte & 0x0F;
    } else if ((byte & 0xF8) == 0xF0) {
        length = 4;
        value = byte & 0x07;
    } else {
        text.remove_prefix(1);
        return 0;
    }
    if (text.size() < length) {
        text.remove_prefix(1);
        return 0;
    }
    for (std::size_t i = 1; i < length; ++i) {
        const auto continuation =
            static_cast<unsigned char>(text[i]);
        if ((continuation & 0xC0) != 0x80) {
            text.remove_prefix(1);
            return 0;
        }
        value = (value << 6) | (continuation & 0x3F);
    }
    text.remove_prefix(length);
    return value;
}

std::vector<std::uint32_t> codePoints(std::string_view text)
{
    std::vector<std::uint32_t> result;
    while (!text.empty()) {
        const std::uint32_t point = nextCodePoint(text);
        if (point == 0) {
            return {};
        }
        result.push_back(point);
    }
    return result;
}

bool isWellFormedUtf8(std::string_view text)
{
    std::string_view remaining = text;
    while (!remaining.empty()) {
        if (nextCodePoint(remaining) == 0) {
            return false;
        }
    }
    return true;
}

// Mirror of interfaceGlyphRanges() in core/renderer/sdl_renderer.cpp. Keep the
// two in sync; the point of the duplication is that a drift shows up as a
// failing test rather than as blank glyphs on screen.
bool coveredByFontRanges(std::uint32_t point)
{
    return (point >= 0x0020 && point <= 0x007F)
        || (point >= 0x00A0 && point <= 0x00FF)
        || (point >= 0x2010 && point <= 0x203B)
        || (point >= 0x2190 && point <= 0x2193)
        || (point >= 0x3000 && point <= 0x30FF)
        || (point >= 0x4E00 && point <= 0x9FA5)
        || (point >= 0xFF00 && point <= 0xFFEF);
}

// Every Chinese string the overlay can show. Kept as a literal list on purpose:
// the point is to encode the expected text, not to read it back from the
// sources being checked.
const char* const interfaceText[] = {
    "玩家透视", "自动瞄准", "自动扳机", "本地雷达", "浏览器雷达", "炸弹计时",
    "快捷控制", "会话状态", "安全运行模式",
    "战斗辅助", "玩家视觉", "世界与对局", "系统",
    "总览", "战斗", "世界与雷达",
    "启用透视", "方框透视", "血条", "武器", "朝向（方框颜色）", "显示角度数值",
    "已发现检测（三角形）", "距离", "闪光弹眼部指示", "连线", "起点", "骨骼",
    "仅已发现目标", "瞄准平滑", "瞄准部位", "优先级", "鼠标灵敏度", "视场角 FOV",
    "补偿量", "最小角度", "最大角度", "启用（侧身时）",
    "智能瞄准（自动锁定）", "显示 FOV 圆圈",
    "延迟（毫秒）", "启用自动扳机", "启用自动瞄准", "启用透视",
    "固定地图雷达", "对局辅助", "显示与渲染", "快捷键",
    "地图尺寸", "玩家标记大小", "水平位置", "垂直位置", "显示玩家名称",
    "启用本地地图覆盖层", "允许局域网观看", "共享玩家名称", "共享队伍",
    "共享 Steam ID（个人资料链接）", "记录脱敏雷达快照", "打开雷达",
    "复制观看地址", "清除中继凭据", "生产者令牌", "中继房间", "中继 WSS 地址",
    "中继共享队伍", "启用公网中继", "公网中继（出站 WSS）",
    "菜单开关", "退出程序", "自动瞄准键", "自动扳机键",
    "点击按钮后按任意键完成绑定", "按 ESC 取消绑定", "该按键已分配给 ",
    "防闪光", "世界透视", "投掷物透视", "掉落武器透视", "其他功能",
    "显示模式", "正在等待 Counter-Strike 2", "客户端及其所在显示器会被自动检测。",
    "每 3 秒重试一次  |  按 F9 退出",
    "请在 CS2 中使用全屏窗口化。覆盖层会把游戏视口映射到正确的显示器和宽高比。",
    "游戏前台", "输入已暂停", "菜单  |  ", "退出",
    "烟雾弹", "闪光弹", "高爆手雷", "燃烧弹", "诱饵弹",
    "正在等待地图", "地图不可用", "地图图像不可用", "数据过期",
    "正在拆弹：", "炸弹 [", " 度", " 米",
    "分辨率：", "帧耗时：", "错过截止时间：采样 ", " 次 | 渲染 ", " 次",
    "管理员 ", " | SDL ", " | Web 资源 ", " | 地图 ", "正常", "缺失", "就绪",
    "需要处理", "启动自检：",
    "采样：", " Hz | 雷达：", " Hz | 平均 ", " ms | P95 ", " | P99 ",
    "雷达 JSON：平均 ", " | 最大 ", "渲染 CPU：平均 ",
    "中继错误：", "中继：", "已发送帧：", "  |  已替换：", "  |  已丢弃：",
    "  |  重连：", "已禁用", "连接中", "已连接", "重试退避中", "正在停止", "失败",
    "无法加载读取游戏所需的 cs2-dumper 偏移数据，程序未启动。",
    "离线环境？请把 CS2_OFFSETS_DIR 指向存放 offsets.json、buttons.json 和 client_dll.json 的文件夹",
    "（即 a2x/cs2-dumper 的 output/ 目录）。",
    "无法启动中继网络线程。", "无法初始化公网中继。", "中继网络线程意外停止。",
    "中继快照超出 WinHTTP 单帧上限。",
    "无法安全地结束上一个中继连接。", "请重启程序后再启用公网中继。",
    "中继 URL 长度必须在 1 到 2048 个字符之间。", "中继 URL 必须使用 wss://。",
    "中继 URL 缺少主机名。", "中继 URL 不能包含用户信息。",
    "中继 URL 不能包含查询串或片段。", "中继 URL 的路径含有不支持的字符。",
    "中继 URL 含有无效的 IPv6 主机名。", "中继 URL 含有无效的主机名后缀。",
    "中继 URL 中的 IPv6 主机名必须加方括号。", "中继 URL 含有无效的主机名。",
    "中继 URL 含有无效的端口。", "中继房间名长度必须在 3 到 64 个字符之间。",
    "中继房间名只能包含字母、数字、'-' 和 '_'。",
    "中继生产者令牌长度必须在 24 到 512 个字符之间。",
    "中继生产者令牌只能包含可见 ASCII 字符。",
    "中继网络超时必须介于 100 到 30000 毫秒之间。",
    "中继快照上限必须介于 4096 到 4194304 字节之间。",
    "中继排队快照的存活时间必须介于 250 到 30000 毫秒之间。",
    "无法解析 Web 雷达的文档根目录：", "启动 CivetWeb 时发生未知错误",
    "绑定地址长度必须在 1 到 255 个字符之间", "绑定地址含有不支持的字符",
    "端口必须介于 1 到 65535 之间", "Web 雷达的文档根目录不能为空",
    "Web 雷达的文档根目录不是一个目录",
    "Web 雷达令牌长度必须在 16 到 128 个字符之间",
    "Web 雷达令牌只能包含 URL 安全的字母、数字、'_' 或 '-'",
    "最大观看人数必须介于 1 到 64 之间",
    "请求超时必须介于 250 到 30000 毫秒之间",
    "WebSocket 超时必须介于 1000 到 300000 毫秒之间",
    "系统信息", "帧：已发布 ", " | 已发送 ", " | 已替换 ",
    "录制中：", " 帧（", " MB），已替换 ", " 帧",
    "流量：", " MB | 最大发送延迟 ", "观看者：", "每 3 秒重试一次",
};

} // namespace

int main()
{
    std::printf("== byte encoding ==\n");

    // "烟" is U+70DF. If the compiler emitted GBK this would be 0xD1 0xCC;
    // if it emitted cp1252 it would not exist at all. Checking the exact UTF-8
    // bytes is what makes a wrong-charset build fail here instead of on screen.
    const std::string_view smoke = "烟";
    check(smoke.size() == 3, "a Chinese character is three UTF-8 bytes");
    check(
        smoke.size() == 3
            && static_cast<unsigned char>(smoke[0]) == 0xE7
            && static_cast<unsigned char>(smoke[1]) == 0x83
            && static_cast<unsigned char>(smoke[2]) == 0x9F,
        "\"烟\" is encoded as E7 83 9F");

    const std::string_view fullWidthColon = "：";
    check(
        fullWidthColon.size() == 3
            && static_cast<unsigned char>(fullWidthColon[0]) == 0xEF
            && static_cast<unsigned char>(fullWidthColon[1]) == 0xBC
            && static_cast<unsigned char>(fullWidthColon[2]) == 0x9A,
        "the fullwidth colon is encoded as EF BC 9A");

    const std::string_view combined = "炸弹 [A]：12.3 秒";
    check(isWellFormedUtf8(combined), "a combined format string is valid UTF-8");
    // 炸 弹 <space> [ A ] ： 1 2 . 3 <space> 秒
    check(
        codePoints(combined).size() == 13,
        "the combined string decodes to 13 code points");
    // The same string is 21 bytes as UTF-8: two 3-byte Chinese characters
    // (6), " [A]" (4), a 3-byte fullwidth colon, "12.3" (4) and
    // <space> + a 3-byte Chinese character (4). The arithmetic is spelled out
    // because the byte count is what catches a wrong execution charset.
    check(
        combined.size() == 21,
        "the combined string is 21 UTF-8 bytes");

    std::printf("== all interface text ==\n");
    std::size_t characters = 0;
    std::size_t translatedStrings = 0;
    for (const char* entry : interfaceText) {
        const std::string_view text(entry);
        check(isWellFormedUtf8(text), entry);
        const std::vector<std::uint32_t> points = codePoints(text);
        check(!points.empty() || text.empty(), entry);
        bool hasNonAscii = false;
        for (const std::uint32_t point : points) {
            ++characters;
            if (point > 0x7F) {
                hasNonAscii = true;
            }
            if (!coveredByFontRanges(point)) {
                ++failures;
                std::printf(
                    "  FAIL U+%04X is outside the requested glyph ranges (in \"%s\")\n",
                    static_cast<unsigned>(point),
                    entry);
            }
        }
        if (hasNonAscii) {
            ++translatedStrings;
        }
    }
    ++checks;
    check(
        translatedStrings > 100,
        "the list really does contain translated strings");

    std::printf(
        "  %zu strings, %zu code points, %zu translated\n",
        sizeof(interfaceText) / sizeof(interfaceText[0]),
        characters,
        translatedStrings);

    std::printf("\n%d checks, %d failure(s)\n", checks, failures);
    if (failures == 0) {
        std::printf("LOCALISATION TEXT OK\n");
    }
    return failures == 0 ? 0 : 1;
}
