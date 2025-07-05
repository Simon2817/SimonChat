#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "global.h"

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);

    // 密码输入框和确认密码输入框设置回显模式
    ui->password_line_edit->setEchoMode(QLineEdit::Password);
    ui->confirm_pws_line_edit->setEchoMode(QLineEdit::Password);

    // 为error_tip_label设置属性值
    // 当state为'error'时，qss根据属性值的做出样式改变
    ui->error_tip_label->setProperty("state", "normal");
    // 刷新qss样式
    repolish(ui->error_tip_label);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_get_vf_code_push_button_clicked()
{
    QString email = ui->email_line_edit->text();

    // email的正则表达式，并匹配email
    QRegularExpression regex(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    QRegularExpressionMatch match = regex.match(email);
    if(match.hasMatch())
    {
        // 发送http验证码
    }
    else
    {
        showTip(tr("邮箱地址正确"), false);
    }
}

void RegisterDialog::showTip(QString str, bool b_ok)
{
    ui->error_tip_label->setText(str);
    if (b_ok == false)
        ui->error_tip_label->setProperty("state", "error");
    else
        ui->error_tip_label->setProperty("state", "normal");
    // 刷新qss
    repolish(ui->error_tip_label);
}
