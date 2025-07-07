#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>
#include <QStyle>
#include <QRegularExpression>

#include <functional>
#include <memory.h>
#include <mutex>
#include <iostream>

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

/**
 * 发送不同功能的http请求id
 */
enum ReqId
{
    ID_GET_VARIFY_CODE = 1001,  // 获取验证码
    ID_REGISTER_USER,           // 注册用户
};

/**
 * 功能模块
 */
enum Modules
{
    REGISTER_MOD = 0,
};

/**
 * 错误码
 */
enum ErrorCodes
{
    SUCCESS = 0,
    ERR_JSON,       // json解析错误
    ERR_NETWORK,    // 网络错误
};
#endif // GLOBAL_H
