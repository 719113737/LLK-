#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(showA()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(showB()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(showC()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(showD()));

}

Dialog::~Dialog()
{
    delete ui;
}
