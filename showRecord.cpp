#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <qdebug.h>
#include <QFile>

void Dialog::showA(){
    QFile file("record1.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    QTextStream in(&file);
    int number=0;
    float total;
    QString ratio="";
    while(!in.atEnd()){
        QString line = in.readLine();
        QStringList list=line.split(" ");
        if(list.at(0)=="A"){
            number=list.at(2).toInt();
            total=list.at(1).toFloat();
            ratio=QString("%1%").arg(number/total*100);
            break;
        }
    }
    ui->textEdit->setText("");
    for(int i=0;i<number;i++){
        QString line = in.readLine();qDebug()<<line;
        ui->textEdit->append(line);
    }
    ui->lineEdit_6->setText(QString("%1").arg(total));
    ui->lineEdit_7->setText(QString::number(number));
    if(total>0)
        ui->lineEdit_8->setText(ratio);
    else
        ui->lineEdit_8->setText("");
    file.close();
}

void Dialog::showB(){
    QFile file("record1.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    QTextStream in(&file);
    int number=0;
    float total;
    QString ratio="";
    while(!in.atEnd()){
        QString line = in.readLine();
        QStringList list=line.split(" ");
        if(list.at(0)=="B"){
            number=list.at(2).toInt();
            total=list.at(1).toFloat();
            ratio=QString("%1%").arg(number/total*100);
            break;
        }
    }
    ui->textEdit->setText("");
    for(int i=0;i<number;i++){
        QString line = in.readLine();qDebug()<<line;
        ui->textEdit->append(line);
    }
    ui->lineEdit_6->setText(QString("%1").arg(total));
    ui->lineEdit_7->setText(QString::number(number));
    if(total>0)
        ui->lineEdit_8->setText(ratio);
    else
        ui->lineEdit_8->setText("");
    file.close();
}

void Dialog::showC(){
    QFile file("record1.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    QTextStream in(&file);
    int number=0;
    float total;
    QString ratio="";
    while(!in.atEnd()){
        QString line = in.readLine();
        QStringList list=line.split(" ");
        if(list.at(0)=="C"){
            number=list.at(2).toInt();
            total=list.at(1).toFloat();
            ratio=QString("%1%").arg(number/total*100);
            break;
        }
    }
    ui->textEdit->setText("");
    for(int i=0;i<number;i++){
        QString line = in.readLine();qDebug()<<line;
        ui->textEdit->append(line);
    }
    ui->lineEdit_6->setText(QString("%1").arg(total));
    ui->lineEdit_7->setText(QString::number(number));
    if(total>0)
        ui->lineEdit_8->setText(ratio);
    else
        ui->lineEdit_8->setText("");
    file.close();
}

void Dialog::showD(){
    QFile file("record1.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    QTextStream in(&file);
    int number=0;
    float total;
    QString ratio="";
    while(!in.atEnd()){
        QString line = in.readLine();
        QStringList list=line.split(" ");
        if(list.at(0)=="D"){
            number=list.at(2).toInt();
            total=list.at(1).toFloat();
            ratio=QString("%1%").arg(number/total*100);
            break;
        }
    }
    ui->textEdit->setText("");
    for(int i=0;i<number;i++){
        QString line = in.readLine();qDebug()<<line;
        ui->textEdit->append(line);
    }
    ui->lineEdit_6->setText(QString("%1").arg(total));
    ui->lineEdit_7->setText(QString::number(number));
    if(total>0)
        ui->lineEdit_8->setText(ratio);
    else
        ui->lineEdit_8->setText("");
    file.close();
}

void MainWindow::showDialog(){
    dialog=new Dialog(this);
    dialog->setModal(false);
    dialog->show();
}
