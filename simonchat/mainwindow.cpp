#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*登录界面*/
    _login_dialog = new LoginDialog(this);
    // 让主界面初始显示登录界面
    this->setCentralWidget(_login_dialog);
    // 主界面来处理登录界面切换至注册界面的信号
    connect(_login_dialog, &LoginDialog::SignalSwitchRegisterDialog, this, &MainWindow::SlotSwitchRegisterDialog);

    /*注册界面*/
    _register_dialog = new RegisterDialog(this);
    _register_dialog->hide();

    /*设置子窗口*/
    _login_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    _register_dialog->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotSwitchRegisterDialog()
{
    this->setCentralWidget(_register_dialog);
    _login_dialog->hide();
    _register_dialog->show();
}

