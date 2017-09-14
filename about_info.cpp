#include "about_info.h"
#include "ui_about_info.h"

about_info::about_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about_info)
{
    ui->setupUi(this);
    // 设置属性关闭后释放内存
    this->setAttribute(Qt::WA_DeleteOnClose);
    // 设置子窗口置顶
    this->setWindowModality(Qt::ApplicationModal);
}

about_info::~about_info()
{
    delete ui;
}

void about_info::on_pushButton_clicked()
{
    this->close();
}


