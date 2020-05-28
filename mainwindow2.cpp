#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    initial();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::startgame()
{
    count1 = 150;
    qtimer1.start(1000);
}

void MainWindow2::gotoFirstwindow(bool)
{
    this->hide();
    emit gotoFirstWindow1();
}


void MainWindow2::initial()
{
    //ui->pushButton_2->setStyleSheet("color: white");
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(gotoFirstwindow(bool)));
    connect(&qtimer1, SIGNAL(timeout()), this, SLOT(getTimeNum()));
    qPushButton1 = ui->pushButton;
    //count1 = 600;
    //qtimer1 = new QTimer(this);
    //qtimer1.
    //qtimer1.start(1000);
}





void MainWindow2::on_pushButton_3_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_3->setIcon(qicon1);
        ui->pushButton_3->setIconSize(QSize(53, 53));
        ui->pushButton_3->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_3->setIcon(qicon1);
        ui->pushButton_3->setIconSize(QSize(53, 53));
        ui->pushButton_3->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_16_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_16->setIcon(qicon1);
        ui->pushButton_16->setIconSize(QSize(53, 53));
        ui->pushButton_16->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_16->setIcon(qicon1);
        ui->pushButton_16->setIconSize(QSize(53, 53));
        ui->pushButton_16->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_24_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_24->setIcon(qicon1);
        ui->pushButton_24->setIconSize(QSize(53, 53));
        ui->pushButton_24->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_24->setIcon(qicon1);
        ui->pushButton_24->setIconSize(QSize(53, 53));
        ui->pushButton_24->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_32_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_32->setIcon(qicon1);
        ui->pushButton_32->setIconSize(QSize(53, 53));
        ui->pushButton_32->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_32->setIcon(qicon1);
        ui->pushButton_32->setIconSize(QSize(53, 53));
        ui->pushButton_32->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_40_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_40->setIcon(qicon1);
        ui->pushButton_40->setIconSize(QSize(53, 53));
        ui->pushButton_40->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_40->setIcon(qicon1);
        ui->pushButton_40->setIconSize(QSize(53, 53));
        ui->pushButton_40->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_48_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_48->setIcon(qicon1);
        ui->pushButton_48->setIconSize(QSize(53, 53));
        ui->pushButton_48->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_48->setIcon(qicon1);
        ui->pushButton_48->setIconSize(QSize(53, 53));
        ui->pushButton_48->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_56_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_56->setIcon(qicon1);
        ui->pushButton_56->setIconSize(QSize(53, 53));
        ui->pushButton_56->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_56->setIcon(qicon1);
        ui->pushButton_56->setIconSize(QSize(53, 53));
        ui->pushButton_56->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_64_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_64->setIcon(qicon1);
        ui->pushButton_64->setIconSize(QSize(53, 53));
        ui->pushButton_64->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_64->setIcon(qicon1);
        ui->pushButton_64->setIconSize(QSize(53, 53));
        ui->pushButton_64->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_71_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_71->setIcon(qicon1);
        ui->pushButton_71->setIconSize(QSize(53, 53));
        ui->pushButton_71->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_71->setIcon(qicon1);
        ui->pushButton_71->setIconSize(QSize(53, 53));
        ui->pushButton_71->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_79_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_79->setIcon(qicon1);
        ui->pushButton_79->setIconSize(QSize(53, 53));
        ui->pushButton_79->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_79->setIcon(qicon1);
        ui->pushButton_79->setIconSize(QSize(53, 53));
        ui->pushButton_79->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_4_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_4->setIcon(qicon1);
        ui->pushButton_4->setIconSize(QSize(53, 53));
        ui->pushButton_4->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_4->setIcon(qicon1);
        ui->pushButton_4->setIconSize(QSize(53, 53));
        ui->pushButton_4->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_15_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_15->setIcon(qicon1);
        ui->pushButton_15->setIconSize(QSize(53, 53));
        ui->pushButton_15->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_15->setIcon(qicon1);
        ui->pushButton_15->setIconSize(QSize(53, 53));
        ui->pushButton_15->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_23_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_23->setIcon(qicon1);
        ui->pushButton_23->setIconSize(QSize(53, 53));
        ui->pushButton_23->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_23->setIcon(qicon1);
        ui->pushButton_23->setIconSize(QSize(53, 53));
        ui->pushButton_23->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_31_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_31->setIcon(qicon1);
        ui->pushButton_31->setIconSize(QSize(53, 53));
        ui->pushButton_31->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_31->setIcon(qicon1);
        ui->pushButton_31->setIconSize(QSize(53, 53));
        ui->pushButton_31->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_39_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_39->setIcon(qicon1);
        ui->pushButton_39->setIconSize(QSize(53, 53));
        ui->pushButton_39->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_39->setIcon(qicon1);
        ui->pushButton_39->setIconSize(QSize(53, 53));
        ui->pushButton_39->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_47_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_47->setIcon(qicon1);
        ui->pushButton_47->setIconSize(QSize(53, 53));
        ui->pushButton_47->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_47->setIcon(qicon1);
        ui->pushButton_47->setIconSize(QSize(53, 53));
        ui->pushButton_47->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_55_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_55->setIcon(qicon1);
        ui->pushButton_55->setIconSize(QSize(53, 53));
        ui->pushButton_55->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_55->setIcon(qicon1);
        ui->pushButton_55->setIconSize(QSize(53, 53));
        ui->pushButton_55->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_63_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_63->setIcon(qicon1);
        ui->pushButton_63->setIconSize(QSize(53, 53));
        ui->pushButton_63->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_63->setIcon(qicon1);
        ui->pushButton_63->setIconSize(QSize(53, 53));
        ui->pushButton_63->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_67_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_67->setIcon(qicon1);
        ui->pushButton_67->setIconSize(QSize(53, 53));
        ui->pushButton_67->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_67->setIcon(qicon1);
        ui->pushButton_67->setIconSize(QSize(53, 53));
        ui->pushButton_67->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_75_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_75->setIcon(qicon1);
        ui->pushButton_75->setIconSize(QSize(53, 53));
        ui->pushButton_75->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_75->setIcon(qicon1);
        ui->pushButton_75->setIconSize(QSize(53, 53));
        ui->pushButton_75->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_5_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_5->setIcon(qicon1);
        ui->pushButton_5->setIconSize(QSize(53, 53));
        ui->pushButton_5->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_5->setIcon(qicon1);
        ui->pushButton_5->setIconSize(QSize(53, 53));
        ui->pushButton_5->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_12_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_12->setIcon(qicon1);
        ui->pushButton_12->setIconSize(QSize(53, 53));
        ui->pushButton_12->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_12->setIcon(qicon1);
        ui->pushButton_12->setIconSize(QSize(53, 53));
        ui->pushButton_12->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_20_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_20->setIcon(qicon1);
        ui->pushButton_20->setIconSize(QSize(53, 53));
        ui->pushButton_20->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_20->setIcon(qicon1);
        ui->pushButton_20->setIconSize(QSize(53, 53));
        ui->pushButton_20->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_28_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_28->setIcon(qicon1);
        ui->pushButton_28->setIconSize(QSize(53, 53));
        ui->pushButton_28->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_28->setIcon(qicon1);
        ui->pushButton_28->setIconSize(QSize(53, 53));
        ui->pushButton_28->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_36_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_36->setIcon(qicon1);
        ui->pushButton_36->setIconSize(QSize(53, 53));
        ui->pushButton_36->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_36->setIcon(qicon1);
        ui->pushButton_36->setIconSize(QSize(53, 53));
        ui->pushButton_36->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_44_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_44->setIcon(qicon1);
        ui->pushButton_44->setIconSize(QSize(53, 53));
        ui->pushButton_44->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_44->setIcon(qicon1);
        ui->pushButton_44->setIconSize(QSize(53, 53));
        ui->pushButton_44->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_52_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_52->setIcon(qicon1);
        ui->pushButton_52->setIconSize(QSize(53, 53));
        ui->pushButton_52->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_52->setIcon(qicon1);
        ui->pushButton_52->setIconSize(QSize(53, 53));
        ui->pushButton_52->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_60_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_60->setIcon(qicon1);
        ui->pushButton_60->setIconSize(QSize(53, 53));
        ui->pushButton_60->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_60->setIcon(qicon1);
        ui->pushButton_60->setIconSize(QSize(53, 53));
        ui->pushButton_60->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_72_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_72->setIcon(qicon1);
        ui->pushButton_72->setIconSize(QSize(53, 53));
        ui->pushButton_72->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_72->setIcon(qicon1);
        ui->pushButton_72->setIconSize(QSize(53, 53));
        ui->pushButton_72->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_80_clicked()
{
    if(firstChoosex == 2&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_80->setIcon(qicon1);
        ui->pushButton_80->setIconSize(QSize(53, 53));
        ui->pushButton_80->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_80->setIcon(qicon1);
        ui->pushButton_80->setIconSize(QSize(53, 53));
        ui->pushButton_80->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 2;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_6_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_6->setIcon(qicon1);
        ui->pushButton_6->setIconSize(QSize(53, 53));
        ui->pushButton_6->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_6->setIcon(qicon1);
        ui->pushButton_6->setIconSize(QSize(53, 53));
        ui->pushButton_6->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_13_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_13->setIcon(qicon1);
        ui->pushButton_13->setIconSize(QSize(53, 53));
        ui->pushButton_13->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_13->setIcon(qicon1);
        ui->pushButton_13->setIconSize(QSize(53, 53));
        ui->pushButton_13->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_21_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_21->setIcon(qicon1);
        ui->pushButton_21->setIconSize(QSize(53, 53));
        ui->pushButton_21->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_21->setIcon(qicon1);
        ui->pushButton_21->setIconSize(QSize(53, 53));
        ui->pushButton_21->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_29_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_29->setIcon(qicon1);
        ui->pushButton_29->setIconSize(QSize(53, 53));
        ui->pushButton_29->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_29->setIcon(qicon1);
        ui->pushButton_29->setIconSize(QSize(53, 53));
        ui->pushButton_29->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_37_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_37->setIcon(qicon1);
        ui->pushButton_37->setIconSize(QSize(53, 53));
        ui->pushButton_37->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_37->setIcon(qicon1);
        ui->pushButton_37->setIconSize(QSize(53, 53));
        ui->pushButton_37->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_45_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_45->setIcon(qicon1);
        ui->pushButton_45->setIconSize(QSize(53, 53));
        ui->pushButton_45->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_45->setIcon(qicon1);
        ui->pushButton_45->setIconSize(QSize(53, 53));
        ui->pushButton_45->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_53_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_53->setIcon(qicon1);
        ui->pushButton_53->setIconSize(QSize(53, 53));
        ui->pushButton_53->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_53->setIcon(qicon1);
        ui->pushButton_53->setIconSize(QSize(53, 53));
        ui->pushButton_53->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_61_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_61->setIcon(qicon1);
        ui->pushButton_61->setIconSize(QSize(53, 53));
        ui->pushButton_61->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_61->setIcon(qicon1);
        ui->pushButton_61->setIconSize(QSize(53, 53));
        ui->pushButton_61->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_74_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_74->setIcon(qicon1);
        ui->pushButton_74->setIconSize(QSize(53, 53));
        ui->pushButton_74->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_74->setIcon(qicon1);
        ui->pushButton_74->setIconSize(QSize(53, 53));
        ui->pushButton_74->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_82_clicked()
{
    if(firstChoosex == 3&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_82->setIcon(qicon1);
        ui->pushButton_82->setIconSize(QSize(53, 53));
        ui->pushButton_82->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_82->setIcon(qicon1);
        ui->pushButton_82->setIconSize(QSize(53, 53));
        ui->pushButton_82->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 3;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_7_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_7->setIcon(qicon1);
        ui->pushButton_7->setIconSize(QSize(53, 53));
        ui->pushButton_7->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_7->setIcon(qicon1);
        ui->pushButton_7->setIconSize(QSize(53, 53));
        ui->pushButton_7->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_17_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_17->setIcon(qicon1);
        ui->pushButton_17->setIconSize(QSize(53, 53));
        ui->pushButton_17->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_17->setIcon(qicon1);
        ui->pushButton_17->setIconSize(QSize(53, 53));
        ui->pushButton_17->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_25_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_25->setIcon(qicon1);
        ui->pushButton_25->setIconSize(QSize(53, 53));
        ui->pushButton_25->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_25->setIcon(qicon1);
        ui->pushButton_25->setIconSize(QSize(53, 53));
        ui->pushButton_25->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_33_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_33->setIcon(qicon1);
        ui->pushButton_33->setIconSize(QSize(53, 53));
        ui->pushButton_33->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_33->setIcon(qicon1);
        ui->pushButton_33->setIconSize(QSize(53, 53));
        ui->pushButton_33->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_41_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_41->setIcon(qicon1);
        ui->pushButton_41->setIconSize(QSize(53, 53));
        ui->pushButton_41->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_41->setIcon(qicon1);
        ui->pushButton_41->setIconSize(QSize(53, 53));
        ui->pushButton_41->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_49_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_49->setIcon(qicon1);
        ui->pushButton_49->setIconSize(QSize(53, 53));
        ui->pushButton_49->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_49->setIcon(qicon1);
        ui->pushButton_49->setIconSize(QSize(53, 53));
        ui->pushButton_49->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_57_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_57->setIcon(qicon1);
        ui->pushButton_57->setIconSize(QSize(53, 53));
        ui->pushButton_57->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_57->setIcon(qicon1);
        ui->pushButton_57->setIconSize(QSize(53, 53));
        ui->pushButton_57->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_65_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_65->setIcon(qicon1);
        ui->pushButton_65->setIconSize(QSize(53, 53));
        ui->pushButton_65->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_65->setIcon(qicon1);
        ui->pushButton_65->setIconSize(QSize(53, 53));
        ui->pushButton_65->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_70_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_70->setIcon(qicon1);
        ui->pushButton_70->setIconSize(QSize(53, 53));
        ui->pushButton_70->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_70->setIcon(qicon1);
        ui->pushButton_70->setIconSize(QSize(53, 53));
        ui->pushButton_70->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_78_clicked()
{
    if(firstChoosex == 4&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_78->setIcon(qicon1);
        ui->pushButton_78->setIconSize(QSize(53, 53));
        ui->pushButton_78->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_78->setIcon(qicon1);
        ui->pushButton_78->setIconSize(QSize(53, 53));
        ui->pushButton_78->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 4;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_8_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_8->setIcon(qicon1);
        ui->pushButton_8->setIconSize(QSize(53, 53));
        ui->pushButton_8->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_8->setIcon(qicon1);
        ui->pushButton_8->setIconSize(QSize(53, 53));
        ui->pushButton_8->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_14_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_14->setIcon(qicon1);
        ui->pushButton_14->setIconSize(QSize(53, 53));
        ui->pushButton_14->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_14->setIcon(qicon1);
        ui->pushButton_14->setIconSize(QSize(53, 53));
        ui->pushButton_14->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_22_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_22->setIcon(qicon1);
        ui->pushButton_22->setIconSize(QSize(53, 53));
        ui->pushButton_22->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_22->setIcon(qicon1);
        ui->pushButton_22->setIconSize(QSize(53, 53));
        ui->pushButton_22->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_30_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_30->setIcon(qicon1);
        ui->pushButton_30->setIconSize(QSize(53, 53));
        ui->pushButton_30->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_30->setIcon(qicon1);
        ui->pushButton_30->setIconSize(QSize(53, 53));
        ui->pushButton_30->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_38_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_38->setIcon(qicon1);
        ui->pushButton_38->setIconSize(QSize(53, 53));
        ui->pushButton_38->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_38->setIcon(qicon1);
        ui->pushButton_38->setIconSize(QSize(53, 53));
        ui->pushButton_38->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_46_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_46->setIcon(qicon1);
        ui->pushButton_46->setIconSize(QSize(53, 53));
        ui->pushButton_46->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_46->setIcon(qicon1);
        ui->pushButton_46->setIconSize(QSize(53, 53));
        ui->pushButton_46->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_54_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_54->setIcon(qicon1);
        ui->pushButton_54->setIconSize(QSize(53, 53));
        ui->pushButton_54->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_54->setIcon(qicon1);
        ui->pushButton_54->setIconSize(QSize(53, 53));
        ui->pushButton_54->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_62_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_62->setIcon(qicon1);
        ui->pushButton_62->setIconSize(QSize(53, 53));
        ui->pushButton_62->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_62->setIcon(qicon1);
        ui->pushButton_62->setIconSize(QSize(53, 53));
        ui->pushButton_62->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_68_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_68->setIcon(qicon1);
        ui->pushButton_68->setIconSize(QSize(53, 53));
        ui->pushButton_68->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_68->setIcon(qicon1);
        ui->pushButton_68->setIconSize(QSize(53, 53));
        ui->pushButton_68->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_76_clicked()
{
    if(firstChoosex == 5&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_76->setIcon(qicon1);
        ui->pushButton_76->setIconSize(QSize(53, 53));
        ui->pushButton_76->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_76->setIcon(qicon1);
        ui->pushButton_76->setIconSize(QSize(53, 53));
        ui->pushButton_76->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 5;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_9_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_9->setIcon(qicon1);
        ui->pushButton_9->setIconSize(QSize(53, 53));
        ui->pushButton_9->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_9->setIcon(qicon1);
        ui->pushButton_9->setIconSize(QSize(53, 53));
        ui->pushButton_9->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_18_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_18->setIcon(qicon1);
        ui->pushButton_18->setIconSize(QSize(53, 53));
        ui->pushButton_18->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_18->setIcon(qicon1);
        ui->pushButton_18->setIconSize(QSize(53, 53));
        ui->pushButton_18->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_26_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_26->setIcon(qicon1);
        ui->pushButton_26->setIconSize(QSize(53, 53));
        ui->pushButton_26->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_26->setIcon(qicon1);
        ui->pushButton_26->setIconSize(QSize(53, 53));
        ui->pushButton_26->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_34_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_34->setIcon(qicon1);
        ui->pushButton_34->setIconSize(QSize(53, 53));
        ui->pushButton_34->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_34->setIcon(qicon1);
        ui->pushButton_34->setIconSize(QSize(53, 53));
        ui->pushButton_34->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_42_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_42->setIcon(qicon1);
        ui->pushButton_42->setIconSize(QSize(53, 53));
        ui->pushButton_42->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_42->setIcon(qicon1);
        ui->pushButton_42->setIconSize(QSize(53, 53));
        ui->pushButton_42->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_50_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_50->setIcon(qicon1);
        ui->pushButton_50->setIconSize(QSize(53, 53));
        ui->pushButton_50->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_50->setIcon(qicon1);
        ui->pushButton_50->setIconSize(QSize(53, 53));
        ui->pushButton_50->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_58_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_58->setIcon(qicon1);
        ui->pushButton_58->setIconSize(QSize(53, 53));
        ui->pushButton_58->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_58->setIcon(qicon1);
        ui->pushButton_58->setIconSize(QSize(53, 53));
        ui->pushButton_58->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_66_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_66->setIcon(qicon1);
        ui->pushButton_66->setIconSize(QSize(53, 53));
        ui->pushButton_66->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_66->setIcon(qicon1);
        ui->pushButton_66->setIconSize(QSize(53, 53));
        ui->pushButton_66->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_69_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_69->setIcon(qicon1);
        ui->pushButton_69->setIconSize(QSize(53, 53));
        ui->pushButton_69->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_69->setIcon(qicon1);
        ui->pushButton_69->setIconSize(QSize(53, 53));
        ui->pushButton_69->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_77_clicked()
{
    if(firstChoosex == 6&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_77->setIcon(qicon1);
        ui->pushButton_77->setIconSize(QSize(53, 53));
        ui->pushButton_77->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_77->setIcon(qicon1);
        ui->pushButton_77->setIconSize(QSize(53, 53));
        ui->pushButton_77->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 6;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_10_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 0)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_10->setIcon(qicon1);
        ui->pushButton_10->setIconSize(QSize(53, 53));
        ui->pushButton_10->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_10->setIcon(qicon1);
        ui->pushButton_10->setIconSize(QSize(53, 53));
        ui->pushButton_10->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 0;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_11_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 1)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_11->setIcon(qicon1);
        ui->pushButton_11->setIconSize(QSize(53, 53));
        ui->pushButton_11->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_11->setIcon(qicon1);
        ui->pushButton_11->setIconSize(QSize(53, 53));
        ui->pushButton_11->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 1;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_19_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 2)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_19->setIcon(qicon1);
        ui->pushButton_19->setIconSize(QSize(53, 53));
        ui->pushButton_19->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_19->setIcon(qicon1);
        ui->pushButton_19->setIconSize(QSize(53, 53));
        ui->pushButton_19->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 2;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_27_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 3)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_27->setIcon(qicon1);
        ui->pushButton_27->setIconSize(QSize(53, 53));
        ui->pushButton_27->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_27->setIcon(qicon1);
        ui->pushButton_27->setIconSize(QSize(53, 53));
        ui->pushButton_27->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 3;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_35_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 4)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_35->setIcon(qicon1);
        ui->pushButton_35->setIconSize(QSize(53, 53));
        ui->pushButton_35->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_35->setIcon(qicon1);
        ui->pushButton_35->setIconSize(QSize(53, 53));
        ui->pushButton_35->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 4;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_43_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 5)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_43->setIcon(qicon1);
        ui->pushButton_43->setIconSize(QSize(53, 53));
        ui->pushButton_43->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_43->setIcon(qicon1);
        ui->pushButton_43->setIconSize(QSize(53, 53));
        ui->pushButton_43->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 5;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_51_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 6)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_51->setIcon(qicon1);
        ui->pushButton_51->setIconSize(QSize(53, 53));
        ui->pushButton_51->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_51->setIcon(qicon1);
        ui->pushButton_51->setIconSize(QSize(53, 53));
        ui->pushButton_51->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 6;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_59_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 7)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_59->setIcon(qicon1);
        ui->pushButton_59->setIconSize(QSize(53, 53));
        ui->pushButton_59->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_59->setIcon(qicon1);
        ui->pushButton_59->setIconSize(QSize(53, 53));
        ui->pushButton_59->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 7;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_73_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 8)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_73->setIcon(qicon1);
        ui->pushButton_73->setIconSize(QSize(53, 53));
        ui->pushButton_73->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_73->setIcon(qicon1);
        ui->pushButton_73->setIconSize(QSize(53, 53));
        ui->pushButton_73->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 8;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_81_clicked()
{
    if(firstChoosex == 7&&firstChoosey == 9)
    {
        QIcon qicon1(":/new/prefix1/SunFlower1.png");
        ui->pushButton_81->setIcon(qicon1);
        ui->pushButton_81->setIconSize(QSize(53, 53));
        ui->pushButton_81->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(":/new/prefix1/SunFlower2.png");
        ui->pushButton_81->setIcon(qicon1);
        ui->pushButton_81->setIconSize(QSize(53, 53));
        ui->pushButton_81->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 7;
            firstChoosey = 9;
        }
        else{
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::getTimeNum()
{
    count1--;
    if(count1 == 0){
        qtimer1.stop();
    }
    ui->lcdNumber->display(count1);
}
