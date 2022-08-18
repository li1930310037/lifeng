#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置表的行数与列数
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(5);
//    设置表头信息
//    QStringList personmessage;
//    personmessage << ;
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() <<"姓名" << "性别" << "年龄");
}

Widget::~Widget()
{
    delete ui;
}

