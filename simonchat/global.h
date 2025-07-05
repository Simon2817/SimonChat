#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>
#include <QStyle>
#include <QRegularExpression>

#include <functional>

/**
 * @brief repolish 用来刷新qss
 * 功能是：
 *  强制样式刷新：
 *      当动态修改样式表后，Qt 不会自动更新已显示的小部件
 *      调用此函数可强制重新应用样式规则
 *  实现样式热更新：
 *      特别适用于运行时切换主题/皮肤的场景
 *      无需重启应用即可看到样式变化
 */
extern std::function<void(QWidget*)> repolish;

#endif // GLOBAL_H
