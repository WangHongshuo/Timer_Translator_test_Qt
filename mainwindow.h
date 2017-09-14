#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "about_info.h"
#include <QButtonGroup>
#include <QActionGroup>
#include <QTranslator>
#include <QString>

#define ZH 1;
#define EN 2;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    void set_direction();

private slots:
    void on_menu_exit_triggered();

    void on_help_about_triggered();

    void closeEvent(QCloseEvent *event);


    void on_button_up_clicked();

    void on_button_donw_clicked();


    void on_button_start_clicked();

    void timer_start();

    void on_button_pause_clicked();

    void on_button_stop_clicked();

    void on_L_zh_triggered();

    void on_L_en_triggered();

private:
    void change_language();
    void load_language_file(QString &file_dir);
    Ui::MainWindow *ui;
    QTimer *timer;
    int direction = 1;
    int language_id = 1;
    QButtonGroup *direction_group = new QButtonGroup;
    bool pause_continue_flag = true;
    QTranslator translator;
};

#endif // MAINWINDOW_H
