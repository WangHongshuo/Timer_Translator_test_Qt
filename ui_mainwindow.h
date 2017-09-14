/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menu_exit;
    QAction *help_about;
    QAction *L_zh;
    QAction *L_en;
    QWidget *centralWidget;
    QPushButton *button_up;
    QPushButton *button_donw;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSlider *slider_1;
    QSpinBox *spinbox_1;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QGroupBox *direction_group_body;
    QRadioButton *direction_up;
    QRadioButton *direction_down;
    QLabel *label;
    QSpinBox *time_value;
    QPushButton *button_start;
    QPushButton *button_pause;
    QPushButton *button_stop;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_Language;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 300);
        menu_exit = new QAction(MainWindow);
        menu_exit->setObjectName(QStringLiteral("menu_exit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/exit_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu_exit->setIcon(icon);
        help_about = new QAction(MainWindow);
        help_about->setObjectName(QStringLiteral("help_about"));
        L_zh = new QAction(MainWindow);
        L_zh->setObjectName(QStringLiteral("L_zh"));
        L_zh->setCheckable(true);
        L_zh->setChecked(true);
        L_en = new QAction(MainWindow);
        L_en->setObjectName(QStringLiteral("L_en"));
        L_en->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button_up = new QPushButton(centralWidget);
        button_up->setObjectName(QStringLiteral("button_up"));
        button_up->setGeometry(QRect(140, 100, 75, 23));
        button_donw = new QPushButton(centralWidget);
        button_donw->setObjectName(QStringLiteral("button_donw"));
        button_donw->setGeometry(QRect(140, 150, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 60, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        slider_1 = new QSlider(layoutWidget);
        slider_1->setObjectName(QStringLiteral("slider_1"));
        slider_1->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(slider_1);

        spinbox_1 = new QSpinBox(layoutWidget);
        spinbox_1->setObjectName(QStringLiteral("spinbox_1"));

        verticalLayout->addWidget(spinbox_1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 71, 239, 151));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        direction_group_body = new QGroupBox(layoutWidget1);
        direction_group_body->setObjectName(QStringLiteral("direction_group_body"));
        direction_up = new QRadioButton(direction_group_body);
        direction_up->setObjectName(QStringLiteral("direction_up"));
        direction_up->setGeometry(QRect(10, 30, 139, 16));
        direction_up->setChecked(true);
        direction_down = new QRadioButton(direction_group_body);
        direction_down->setObjectName(QStringLiteral("direction_down"));
        direction_down->setGeometry(QRect(10, 70, 139, 16));

        gridLayout->addWidget(direction_group_body, 0, 0, 1, 3);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setContextMenuPolicy(Qt::DefaultContextMenu);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        time_value = new QSpinBox(layoutWidget1);
        time_value->setObjectName(QStringLiteral("time_value"));

        gridLayout->addWidget(time_value, 1, 1, 1, 2);

        button_start = new QPushButton(layoutWidget1);
        button_start->setObjectName(QStringLiteral("button_start"));

        gridLayout->addWidget(button_start, 2, 0, 1, 1);

        button_pause = new QPushButton(layoutWidget1);
        button_pause->setObjectName(QStringLiteral("button_pause"));

        gridLayout->addWidget(button_pause, 2, 1, 1, 1);

        button_stop = new QPushButton(layoutWidget1);
        button_stop->setObjectName(QStringLiteral("button_stop"));

        gridLayout->addWidget(button_stop, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_Language = new QMenu(menu);
        menu_Language->setObjectName(QStringLiteral("menu_Language"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(menu_Language->menuAction());
        menu->addAction(menu_exit);
        menu_Language->addAction(L_zh);
        menu_Language->addAction(L_en);
        menu_2->addAction(help_about);

        retranslateUi(MainWindow);
        QObject::connect(slider_1, SIGNAL(valueChanged(int)), spinbox_1, SLOT(setValue(int)));
        QObject::connect(spinbox_1, SIGNAL(valueChanged(int)), slider_1, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "upup", Q_NULLPTR));
        menu_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        menu_exit->setShortcut(QApplication::translate("MainWindow", "Alt+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        help_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        help_about->setShortcut(QApplication::translate("MainWindow", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        L_zh->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", Q_NULLPTR));
        L_en->setText(QApplication::translate("MainWindow", "English", Q_NULLPTR));
        button_up->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        button_donw->setText(QApplication::translate("MainWindow", "\345\207\217\345\260\221", Q_NULLPTR));
        direction_group_body->setTitle(QApplication::translate("MainWindow", "\346\226\271\345\220\221", Q_NULLPTR));
        direction_up->setText(QApplication::translate("MainWindow", "\345\220\221\344\270\212", Q_NULLPTR));
        direction_down->setText(QApplication::translate("MainWindow", "\345\220\221\344\270\213", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264 \357\274\232", Q_NULLPTR));
        button_start->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        button_pause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        button_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", Q_NULLPTR));
        menu_Language->setTitle(QApplication::translate("MainWindow", "\350\257\255\350\250\200(Language)", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
