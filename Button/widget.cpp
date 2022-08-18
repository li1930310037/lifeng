#include "widget.h"
#include "ui_widget.h"
#include "QtDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    单选按钮默认选择
    ui->Button_man->setChecked(true);
//    复选按钮，获取选取状态
    connect(ui->checkBox,&QCheckBox::stateChanged,[=](int status){
        qDebug() << status;
    });
}

Widget::~Widget()
{
    delete ui;
}

