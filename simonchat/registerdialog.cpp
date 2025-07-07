#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "httpmanager.h"

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

    // 初始化http请求回调函数队列
    this->initHttpHandlers();

    connect(HttpManager::GetInstance().get(), &HttpManager::SignalRegisterModFinish,
             this, &RegisterDialog::SlotRegisterModFinish);
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
        showTip(tr("邮箱地址不正确"), false);
    }
}

void RegisterDialog::SlotRegisterModFinish(QString result_str, ErrorCodes err, ReqId req_id)
{
    if (err != ErrorCodes::SUCCESS)
    {
        showTip("网络请求错误", false);
        return;
    }

    // 解析json数据
    QJsonDocument jsonDoc = QJsonDocument::fromJson(result_str.toUtf8());
    if (jsonDoc.isNull() || !jsonDoc.isObject())
    {
        showTip("json数据解析失败", false);
        return;
    }
    QJsonObject jsonObj = jsonDoc.object();

    // 根据回调函数队列，根据req_id执行响应的请求
    _handlers[req_id](jsonObj);
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

void RegisterDialog::initHttpHandlers()
{
    // 注册验证码回包逻辑
    _handlers.insert(ReqId::ID_GET_VARIFY_CODE, [this](const QJsonObject& jsonObj)
    {
        int error = jsonObj["error"].toInt();
        if (error != ErrorCodes::SUCCESS)
        {
            showTip("参数错误", false);
            return;
        }

        auto email = jsonObj["email"].toString();
        showTip("验证码已发送至邮箱", true);
        qDebug() << "验证码已发送至邮箱(" << email << ")";
    });
}
