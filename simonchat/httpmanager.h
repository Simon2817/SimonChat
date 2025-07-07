#ifndef HTTPMANAGER_H
#define HTTPMANAGER_H

#include <QNetworkAccessManager> // qt的http管理类
#include <QNetworkReply>
#include <QUrl>
#include <QObject>
#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>

#include "singleton.h"

/******************************************************************************
 *
 * @file       httpmanager.h
 * @brief      单例模式的http管理类
 *
 * @author     Simon
 * @date       2025/07/07
 * @history
 *****************************************************************************/

// CRTP:奇异模板类
class HttpManager : public QObject, public Singleton<HttpManager>
        , public std::enable_shared_from_this<HttpManager>
{
    Q_OBJECT
public:
    ~HttpManager();

private:
    // 把基类定位为自己的友元类，方便基类调用HttpManager类的构造函数
    friend class Singleton<HttpManager>;
    HttpManager();

    // 发送post请求
    /**
     * QUrl url:            http的请求url路径
     * QJsonObject jsonObj: 携带的请求数据
     * ReqId req_id:        发送的请求id（例如：注册请求（ID_GET_VARIFY_CODE）、获取验证码请求，等等）
     * Modules mod:         发送该请求的模块
     *
     * 根据req_id、mod，我们能够将返回的post的请求透传给（发出对应请求）对应的界面
     */
    void PostHttpReq(QUrl url, QJsonObject jsonObj, ReqId req_id, Modules mod);

private slots:
    // 接收http请求发送完成信号
    /**
     * QString result_str:  请求返回结果的描述
     * ErrorCodes err:      返回的错误码
     * ReqId req_id:        发送的请求id（例如：注册请求（ID_GET_VARIFY_CODE）、获取验证码请求，等等）
     * Modules mod:         发送该请求的模块
     *
     * 该槽函数，将根据req_id、mod处理对应（发出http请求的）界面的请求
     * 并发送相应的信号给对应的界面
     */
    void SlotHttpFinish(QString result_str, ErrorCodes err, ReqId req_id, Modules mod);

signals:
    // http请求发送完成信号
    /**
     * QString result_str:  请求返回结果的描述
     * ErrorCodes err:      返回的错误码
     * ReqId req_id:        发送的请求id（例如：注册请求（ID_GET_VARIFY_CODE）、获取验证码请求，等等）
     * Modules mod:         发送该请求的模块
     */
    void SignalHttpFinish(QString result_str, ErrorCodes err, ReqId req_id, Modules mod);

    // 注册模块 http请求发送完成信号
    void SignalRegisterModFinish(QString result_str, ErrorCodes err, ReqId req_id);

private:
    // 用来调用http的发送请求等功能
    QNetworkAccessManager _http_mgr;
};

#endif // HTTPMANAGER_H
