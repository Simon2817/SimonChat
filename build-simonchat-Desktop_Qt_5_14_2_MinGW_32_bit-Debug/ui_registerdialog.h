/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *error_tip_label;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QLineEdit *user_line_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_label;
    QLineEdit *email_line_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *password_label;
    QLineEdit *password_line_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confirm_pws_label;
    QLineEdit *confirm_pws_line_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *vf_code_label;
    QLineEdit *vf_code_line_edit;
    QPushButton *get_vf_code_push_button;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *confirm_push_button;
    QPushButton *cancle_push_button;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(340, 500);
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        error_tip_label = new QLabel(widget);
        error_tip_label->setObjectName(QString::fromUtf8("error_tip_label"));
        error_tip_label->setMinimumSize(QSize(0, 30));
        error_tip_label->setMaximumSize(QSize(16777215, 16777215));
        error_tip_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(error_tip_label);


        verticalLayout_3->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_label = new QLabel(page);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setMinimumSize(QSize(0, 25));
        user_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_label);

        user_line_edit = new QLineEdit(page);
        user_line_edit->setObjectName(QString::fromUtf8("user_line_edit"));
        user_line_edit->setMinimumSize(QSize(0, 25));
        user_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_line_edit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        email_label = new QLabel(page);
        email_label->setObjectName(QString::fromUtf8("email_label"));
        email_label->setMinimumSize(QSize(0, 25));
        email_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_label);

        email_line_edit = new QLineEdit(page);
        email_line_edit->setObjectName(QString::fromUtf8("email_line_edit"));
        email_line_edit->setMinimumSize(QSize(0, 25));
        email_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_line_edit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        password_label = new QLabel(page);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setMinimumSize(QSize(0, 25));
        password_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(password_label);

        password_line_edit = new QLineEdit(page);
        password_line_edit->setObjectName(QString::fromUtf8("password_line_edit"));
        password_line_edit->setMinimumSize(QSize(0, 25));
        password_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(password_line_edit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        confirm_pws_label = new QLabel(page);
        confirm_pws_label->setObjectName(QString::fromUtf8("confirm_pws_label"));
        confirm_pws_label->setMinimumSize(QSize(0, 25));
        confirm_pws_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_pws_label);

        confirm_pws_line_edit = new QLineEdit(page);
        confirm_pws_line_edit->setObjectName(QString::fromUtf8("confirm_pws_line_edit"));
        confirm_pws_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_pws_line_edit);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        vf_code_label = new QLabel(page);
        vf_code_label->setObjectName(QString::fromUtf8("vf_code_label"));
        vf_code_label->setMinimumSize(QSize(0, 25));
        vf_code_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(vf_code_label);

        vf_code_line_edit = new QLineEdit(page);
        vf_code_line_edit->setObjectName(QString::fromUtf8("vf_code_line_edit"));
        vf_code_line_edit->setMinimumSize(QSize(0, 25));
        vf_code_line_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(vf_code_line_edit);

        get_vf_code_push_button = new QPushButton(page);
        get_vf_code_push_button->setObjectName(QString::fromUtf8("get_vf_code_push_button"));
        get_vf_code_push_button->setMinimumSize(QSize(0, 25));
        get_vf_code_push_button->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(get_vf_code_push_button);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        confirm_push_button = new QPushButton(page);
        confirm_push_button->setObjectName(QString::fromUtf8("confirm_push_button"));
        confirm_push_button->setMinimumSize(QSize(0, 25));
        confirm_push_button->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(confirm_push_button);

        cancle_push_button = new QPushButton(page);
        cancle_push_button->setObjectName(QString::fromUtf8("cancle_push_button"));
        cancle_push_button->setMinimumSize(QSize(0, 25));
        cancle_push_button->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(cancle_push_button);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        error_tip_label->setText(QCoreApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_label->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        email_label->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        password_label->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        confirm_pws_label->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244\357\274\232", nullptr));
        vf_code_label->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        get_vf_code_push_button->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        confirm_push_button->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancle_push_button->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
