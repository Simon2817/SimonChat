#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    // 注册按钮被点击，触发切换至注册界面信号
    connect(ui->register_push_button, &QPushButton::clicked, this, &LoginDialog::SignalSwitchRegisterDialog);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
