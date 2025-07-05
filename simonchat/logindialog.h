#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

signals:
    // 向外提供：切换至注册界面信号
    void SignalSwitchRegisterDialog();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
