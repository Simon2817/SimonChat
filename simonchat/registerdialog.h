#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>

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

private:
    // 显示提示信息（例如：邮箱地址不正确）
    void showTip(QString, bool);

private:
    Ui::RegisterDialog *ui;
};

#endif // REGISTERDIALOG_H
