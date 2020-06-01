#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDate>
#include <qdebug.h>

//写入信息
void record(QString level,int time,QString currentTime,bool win){
    QStringList List;
    QString str=QString::number(time);
    int number1,number2;
    str+=" "+currentTime;
    QFile file("record1.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
        return;
    //文件为空时写入基本信息
    if(file.size()==0){
        file.close();
        QString str="A 0 0\nB 0 0\nC 0 0\nD 0 0";
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        file.write(str.toLatin1());
        file.close();
        file.open(QIODevice::ReadWrite | QIODevice::Text);
    }
    QTextStream in(&file);
    int i;
    while(!in.atEnd()){
        QString line = in.readLine();
        List<<line;
        qDebug()<<line<<"+++";
        QStringList list=line.split(" ");
        if(list.at(0)==level){
            i=List.length();
            number1=list.at(2).toInt();
            number2=list.at(1).toInt();
        }
    }
    file.close();
    QString s="";
    QStringList list=List.at(i-1).split(" ");
    //如果游戏在失败状态下结束则对应级别局数加一
    if(!win){
        s+=list.at(0)+" "+QString::number(number2+1)+" "+list.at(2);
    }
    //胜利状态下结束游戏则对应级别局数与胜利局数均加一
    else{
        s+=list.at(0)+" "+QString::number(number2+1)+" "+QString::number(number1+1);
    }
    List.replace(i-1,s);
    if(win){
        int j;
        for(j=i;j<i+number1;j++){
            QStringList list=List.at(j).split(" ");
            if(time<=list.at(0).toInt()){
                break;
            }
        }
        List<<"";
        for(int k=List.length()-1;k>j;k--){
            List.replace(k,List.at(k-1));
        }
        List.replace(j,str);
    }
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    for(int i=0;i<List.length();i++){
        file.write((List.at(i)+"\n").toLatin1());
    }
    file.close();
}

void MainWindow::Record(){
    //获取当前时间
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy/MM/dd_hh:mm");
    qDebug()<<current_date;

    //调用函数把信息写入文件,true表示胜利
    record("C",700,current_date,false);
}
