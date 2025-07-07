#include "httpmanager.h"

#include <QDebug>

HttpManager::HttpManager()
{
    connect(this, &HttpManager::SignalHttpFinish, this, &HttpManager::SlotHttpFinish);
}

HttpManager::~HttpManager()
{

}

void HttpManager::PostHttpReq(QUrl url, QJsonObject jsonObj, ReqId req_id, Modules mod)
{
    // 根据json对象获取数据
    QByteArray data = QJsonDocument(jsonObj).toJson();

    // 创建请求对象
    QNetworkRequest request(url);
    // 设置请求头
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setHeader(QNetworkRequest::ContentTypeHeader, QByteArray::number(data.length()));

    // 通过智能指针来管理this指针，防止异常
    auto self = shared_from_this();

    // 发送请求，并通过reply接收响应
    QNetworkReply *reply = _http_mgr.post(request, data);

    // 处理reply的finish信号
    connect(reply, &QNetworkReply::finished, [self, reply, req_id, mod]()
    {
        // 处理错误情况
        if (reply->error() != QNetworkReply::NoError)
        {
            qDebug() << reply->errorString();
            // 发送信号通知http请求完成
            emit self->SignalHttpFinish(reply->errorString(), ErrorCodes::ERR_NETWORK, req_id, mod);
            reply->deleteLater();
            return;
        }
        // 无错误
        QString result_str = reply->readAll();
        // 发送信号
        emit self->SignalHttpFinish(result_str, ErrorCodes::SUCCESS, req_id, mod);
        reply->deleteLater();
        return;
    });
}

void HttpManager::SlotHttpFinish(QString result_str, ErrorCodes err, ReqId req_id, Modules mod)
{
    auto self = shared_from_this();
    switch (mod)
    {
        case Modules::REGISTER_MOD:
        {
            emit self->SignalRegisterModFinish(result_str, err, req_id);
        }
        break;
    }
}
