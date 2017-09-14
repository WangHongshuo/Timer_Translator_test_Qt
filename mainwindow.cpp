#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include <QTimer>
#include <QDebug>
#include <QTranslator>
#include <QString>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(480,360);
    // slider & spinbox
    ui->slider_1->setRange(0,100);
    ui->slider_1->setSingleStep(1);
    ui->slider_1->setValue(100);
    ui->spinbox_1->setRange(0,100);
    ui->spinbox_1->setSingleStep(1);
    ui->spinbox_1->setValue(100);
    ui->spinbox_1->setWrapping(true);
    ui->spinbox_1->setFrame(true);
    // timer spinbox
    ui->time_value->setRange(0,99999999);
    ui->time_value->setSingleStep(1);
    ui->time_value->setSuffix("  Ms");
    ui->time_value->setValue(500);

    timer = new QTimer(this);

    direction_group->addButton(ui->direction_up,1);
    direction_group->addButton(ui->direction_down,2);
    QActionGroup *language_group = new QActionGroup(this);

    language_group->setExclusive(true);
    language_group->addAction(ui->L_en);
    language_group->addAction(ui->L_zh);

    ui->button_pause->setEnabled(false);
    ui->button_stop->setEnabled(false);

    connect(direction_group,SIGNAL(buttonClicked(int)),this,SLOT(set_direction()));
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_start()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_menu_exit_triggered()
{
    this->close();
}

void MainWindow::on_help_about_triggered()
{
    // 设置about_dialog为主窗口的子对象
    about_info* about_dialog = new about_info(this);
    about_dialog->show();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // 重写closeevent确认关闭窗口
    switch( QMessageBox::information( this, tr("确认？"),
                                      tr("关闭？"),
                                      tr("upup"), tr("124"),0, 1 ) )
    {
    case 0:
        event->accept();
        break;
    case 1:
    default:
        event->ignore();
        break;
    }
}



void MainWindow::on_button_up_clicked()
{
    ui->spinbox_1->setValue(ui->spinbox_1->value()+1);
}

void MainWindow::on_button_donw_clicked()
{
    ui->spinbox_1->setValue(ui->spinbox_1->value()-1);
}

void MainWindow::set_direction()
{
    switch (direction_group->checkedId()) {
    case 1:
        direction = 1;
        break;
    default:
        direction = 2;
        break;
    }
}

void MainWindow::timer_start()
{
    if(direction == 1)
        ui->spinbox_1->setValue(ui->spinbox_1->value()+1);
    else
        ui->spinbox_1->setValue(ui->spinbox_1->value()-1);
}

void MainWindow::on_button_start_clicked()
{
    ui->button_pause->setEnabled(true);
    ui->button_stop->setEnabled(true);
    ui->button_start->setEnabled(false);
    ui->time_value->setEnabled(false);
    timer->setInterval(ui->time_value->value());
    timer->start();
}

void MainWindow::on_button_pause_clicked()
{
    if(pause_continue_flag)
    {
        timer->stop();
        ui->button_pause->setText(tr("继续"));
        pause_continue_flag = !pause_continue_flag;
    }
    else
    {
        timer->start();
        ui->button_pause->setText(tr("暂停"));
        pause_continue_flag = !pause_continue_flag;
    }
}

void MainWindow::on_button_stop_clicked()
{
    ui->button_pause->setEnabled(false);
    ui->button_pause->setText(tr("暂停"));
    ui->button_start->setEnabled(true);
    ui->button_stop->setEnabled(false);
    ui->time_value->setEnabled(true);
    timer->stop();
}

void MainWindow::change_language()
{
    //    qDebug() << language_id;
    QString strLanguageFile;
    if (language_id == 2)
    {
        strLanguageFile = qApp->applicationDirPath() + QString("/languages/EN.qm");
        //        qDebug() << strLanguageFile;
        load_language_file(strLanguageFile);
    }
    else if (language_id == 1)
    {
        qApp->removeTranslator(&translator);
        ui->retranslateUi(this);
    }

}

void MainWindow::on_L_zh_triggered()
{
    language_id = ZH;
    change_language();
}

void MainWindow::on_L_en_triggered()
{
    language_id = EN;
    change_language();
}

void MainWindow::load_language_file(QString &file_dir)
{
    if(QFile(file_dir).exists())
    {
        // qApp为application全局变量
        // 在translator加载翻译文件后，app安装翻译后，需要重新翻译
        translator.load(file_dir);
        qApp->installTranslator(&translator);
        ui->retranslateUi(this);
        //        qDebug() << "load";
    }
    else
    {
        QMessageBox::about(NULL, "错误！(Error!)", " 语言文件不存在! \n\rLanguage files not exist!");
    }
}
