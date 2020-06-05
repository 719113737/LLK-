#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initial();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gotoSecondwindow(bool)
{
    this->hide();
    mWindow2->hard();
    mWindow2->startgame();
    mWindow2->show();
}

void MainWindow::backtoFirstwindow()
{
    this->show();
}

void MainWindow::initial()
{
    mWindow2 = new MainWindow2();
    mWindow2->setWindowTitle("连连看");
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(gotoSecondwindow(bool)));
    connect(mWindow2, SIGNAL(gotoFirstWindow1()), this, SLOT(backtoFirstwindow()));
}


void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    mWindow2->easy();
    mWindow2->startgame();
    mWindow2->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    this->hide();
    mWindow2->normal();
    mWindow2->startgame();
    mWindow2->show();
}
