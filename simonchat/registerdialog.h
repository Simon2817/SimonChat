#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

#include "global.h"

/******************************************************************************
 *
 * @file       registerdialog.h
 * @brief      XXXX Function
 *
 * @author     Simon
 * @date       2025/07/04
 * @history
 *****************************************************************************/

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private slots:
    // 用户点击获取验证码按钮
    void on_get_vf_code_push_button_clicked();

    // http请求发送完成
    void SlotRegisterModFinish(QString result_str, ErrorCodes err, ReqId req_id);

private:
    // 显示提示信息（例如：邮箱地址不正确）
    void showTip(QString, bool);

    // 初始化http请求对应的回调函数
    void initHttpHandlers();

private:
    Ui::RegisterDialog *ui;

    // http请求的回调函数队列
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handlers;
};

#endif // REGISTERDIALOG_H
