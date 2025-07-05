/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_line_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password_label;
    QLineEdit *password_line_edit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *forget_password_label;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *login_push_button;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *register_push_button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(300, 500);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(300, 500));
        verticalLayout_2 = new QVBoxLayout(LoginDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(LoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/ice.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_label = new QLabel(LoginDialog);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setMinimumSize(QSize(0, 25));
        user_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_label);

        user_line_edit = new QLineEdit(LoginDialog);
        user_line_edit->setObjectName(QString::fromUtf8("user_line_edit"));
        user_line_edit->setMinimumSize(QSize(0, 25));
        user_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_line_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        password_label = new QLabel(LoginDialog);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setMinimumSize(QSize(0, 25));
        password_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(password_label);

        password_line_edit = new QLineEdit(LoginDialog);
        password_line_edit->setObjectName(QString::fromUtf8("password_line_edit"));
        password_line_edit->setMinimumSize(QSize(0, 25));
        password_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(password_line_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        forget_password_label = new QLabel(LoginDialog);
        forget_password_label->setObjectName(QString::fromUtf8("forget_password_label"));
        forget_password_label->setMinimumSize(QSize(0, 25));
        forget_password_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(forget_password_label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        login_push_button = new QPushButton(LoginDialog);
        login_push_button->setObjectName(QString::fromUtf8("login_push_button"));
        login_push_button->setMinimumSize(QSize(100, 30));

        horizontalLayout_4->addWidget(login_push_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        register_push_button = new QPushButton(LoginDialog);
        register_push_button->setObjectName(QString::fromUtf8("register_push_button"));
        register_push_button->setMinimumSize(QSize(100, 30));

        horizontalLayout_5->addWidget(register_push_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QString());
        user_label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        password_label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        forget_password_label->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        login_push_button->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        register_push_button->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
