#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include "logindialog.h"
#include "registerdialog.h"

/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      主窗口界面
 *
 * @author     Simon
 * @date       2025/07/04
 * @history
 *****************************************************************************/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // 切换到注册界面
    void SlotSwitchRegisterDialog();

private:
    Ui::MainWindow *ui;

    // 登录界面
    LoginDialog *_login_dialog;

    // 注册界面
    RegisterDialog *_register_dialog;
};
#endif // MAINWINDOW_H
