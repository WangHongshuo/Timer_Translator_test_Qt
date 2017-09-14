/********************************************************************************
** Form generated from reading UI file 'about_info.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_INFO_H
#define UI_ABOUT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about_info
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *about_info)
    {
        if (about_info->objectName().isEmpty())
            about_info->setObjectName(QStringLiteral("about_info"));
        about_info->resize(240, 178);
        pushButton = new QPushButton(about_info);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 140, 75, 23));
        label = new QLabel(about_info);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 141, 21));

        retranslateUi(about_info);

        QMetaObject::connectSlotsByName(about_info);
    } // setupUi

    void retranslateUi(QDialog *about_info)
    {
        about_info->setWindowTitle(QApplication::translate("about_info", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("about_info", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("about_info", "\347\233\264\350\247\206\346\210\221\345\264\275\347\247\215\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class about_info: public Ui_about_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_INFO_H
