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
    count2 = 0;
    ui->lcdNumber_2->display(count2);
    qtimer1.start(1000);
    QPushButton* tempqPushbutton;
    for(int i = 0;i<8;i++){
        for(int j = 0;j<10;j++){
            tempqPushbutton = getPushButton(i, j);
            tempqPushbutton->setVisible(true);
            matrix[i][j] = 1;
        }
    }
    ui->pushButton_36->setVisible(true);
}

void MainWindow2::easy()
{
    tempBlock1 = create1->easy();
    for(int i = 0;i<8;i++){
        for(int j = 0;j<10;j++){
            picOrder[i][j] = tempBlock1[i][j]->num - 1;
        }
    }
    //QIcon qicon1(QString::fromStdString(getPicTypeName(0)));
    //QIcon qicon2(QString::fromStdString(getPicTypeName(1)));
    //QIcon qicon3(QString::fromStdString(getPicTypeName(2)));
    //QIcon qicon4(QString::fromStdString(getPicTypeName(3)));
    //QIcon qicon5(QString::fromStdString(getPicTypeName(4)));
    ui->pushButton_3->setIcon(getQicon(picOrder[0][0]));
    ui->pushButton_3->setIconSize(QSize(53, 53));
    ui->pushButton_3->setFlat(false);
    ui->pushButton_16->setIcon(getQicon(picOrder[0][1]));
    ui->pushButton_16->setIconSize(QSize(53, 53));
    ui->pushButton_16->setFlat(false);
    ui->pushButton_24->setIcon(getQicon(picOrder[0][2]));
    ui->pushButton_24->setIconSize(QSize(53, 53));
    ui->pushButton_24->setFlat(false);
    ui->pushButton_32->setIcon(getQicon(picOrder[0][3]));
    ui->pushButton_32->setIconSize(QSize(53, 53));
    ui->pushButton_32->setFlat(false);
    ui->pushButton_40->setIcon(getQicon(picOrder[0][4]));
    ui->pushButton_40->setIconSize(QSize(53, 53));
    ui->pushButton_40->setFlat(false);
    ui->pushButton_48->setIcon(getQicon(picOrder[0][5]));
    ui->pushButton_48->setIconSize(QSize(53, 53));
    ui->pushButton_48->setFlat(false);
    ui->pushButton_56->setIcon(getQicon(picOrder[0][6]));
    ui->pushButton_56->setIconSize(QSize(53, 53));
    ui->pushButton_56->setFlat(false);
    ui->pushButton_64->setIcon(getQicon(picOrder[0][7]));
    ui->pushButton_64->setIconSize(QSize(53, 53));
    ui->pushButton_64->setFlat(false);
    ui->pushButton_71->setIcon(getQicon(picOrder[0][8]));
    ui->pushButton_71->setIconSize(QSize(53, 53));
    ui->pushButton_71->setFlat(false);
    ui->pushButton_79->setIcon(getQicon(picOrder[0][9]));
    ui->pushButton_79->setIconSize(QSize(53, 53));
    ui->pushButton_79->setFlat(false);
    ui->pushButton_4->setIcon(getQicon(picOrder[1][0]));
    ui->pushButton_4->setIconSize(QSize(53, 53));
    ui->pushButton_4->setFlat(false);
    ui->pushButton_15->setIcon(getQicon(picOrder[1][1]));
    ui->pushButton_15->setIconSize(QSize(53, 53));
    ui->pushButton_15->setFlat(false);
    ui->pushButton_23->setIcon(getQicon(picOrder[1][2]));
    ui->pushButton_23->setIconSize(QSize(53, 53));
    ui->pushButton_23->setFlat(false);
    ui->pushButton_31->setIcon(getQicon(picOrder[1][3]));
    ui->pushButton_31->setIconSize(QSize(53, 53));
    ui->pushButton_31->setFlat(false);
    ui->pushButton_39->setIcon(getQicon(picOrder[1][4]));
    ui->pushButton_39->setIconSize(QSize(53, 53));
    ui->pushButton_39->setFlat(false);
    ui->pushButton_47->setIcon(getQicon(picOrder[1][5]));
    ui->pushButton_47->setIconSize(QSize(53, 53));
    ui->pushButton_47->setFlat(false);
    ui->pushButton_55->setIcon(getQicon(picOrder[1][6]));
    ui->pushButton_55->setIconSize(QSize(53, 53));
    ui->pushButton_55->setFlat(false);
    ui->pushButton_63->setIcon(getQicon(picOrder[1][7]));
    ui->pushButton_63->setIconSize(QSize(53, 53));
    ui->pushButton_63->setFlat(false);
    ui->pushButton_67->setIcon(getQicon(picOrder[1][8]));
    ui->pushButton_67->setIconSize(QSize(53, 53));
    ui->pushButton_67->setFlat(false);
    ui->pushButton_75->setIcon(getQicon(picOrder[1][9]));
    ui->pushButton_75->setIconSize(QSize(53, 53));
    ui->pushButton_75->setFlat(false);
    ui->pushButton_5->setIcon(getQicon(picOrder[2][0]));
    ui->pushButton_5->setIconSize(QSize(53, 53));
    ui->pushButton_5->setFlat(false);
    ui->pushButton_12->setIcon(getQicon(picOrder[2][1]));
    ui->pushButton_12->setIconSize(QSize(53, 53));
    ui->pushButton_12->setFlat(false);
    ui->pushButton_20->setIcon(getQicon(picOrder[2][2]));
    ui->pushButton_20->setIconSize(QSize(53, 53));
    ui->pushButton_20->setFlat(false);
    ui->pushButton_28->setIcon(getQicon(picOrder[2][3]));
    ui->pushButton_28->setIconSize(QSize(53, 53));
    ui->pushButton_28->setFlat(false);
    ui->pushButton_36->setIcon(getQicon(picOrder[2][4]));
    ui->pushButton_36->setIconSize(QSize(53, 53));
    ui->pushButton_36->setFlat(false);
    ui->pushButton_44->setIcon(getQicon(picOrder[2][5]));
    ui->pushButton_44->setIconSize(QSize(53, 53));
    ui->pushButton_44->setFlat(false);
    ui->pushButton_52->setIcon(getQicon(picOrder[2][6]));
    ui->pushButton_52->setIconSize(QSize(53, 53));
    ui->pushButton_52->setFlat(false);
    ui->pushButton_60->setIcon(getQicon(picOrder[2][7]));
    ui->pushButton_60->setIconSize(QSize(53, 53));
    ui->pushButton_60->setFlat(false);
    ui->pushButton_72->setIcon(getQicon(picOrder[2][8]));
    ui->pushButton_72->setIconSize(QSize(53, 53));
    ui->pushButton_72->setFlat(false);
    ui->pushButton_80->setIcon(getQicon(picOrder[2][9]));
    ui->pushButton_80->setIconSize(QSize(53, 53));
    ui->pushButton_80->setFlat(false);
    ui->pushButton_6->setIcon(getQicon(picOrder[3][0]));
    ui->pushButton_6->setIconSize(QSize(53, 53));
    ui->pushButton_6->setFlat(false);
    ui->pushButton_13->setIcon(getQicon(picOrder[3][1]));
    ui->pushButton_13->setIconSize(QSize(53, 53));
    ui->pushButton_13->setFlat(false);
    ui->pushButton_21->setIcon(getQicon(picOrder[3][2]));
    ui->pushButton_21->setIconSize(QSize(53, 53));
    ui->pushButton_21->setFlat(false);
    ui->pushButton_29->setIcon(getQicon(picOrder[3][3]));
    ui->pushButton_29->setIconSize(QSize(53, 53));
    ui->pushButton_29->setFlat(false);
    ui->pushButton_37->setIcon(getQicon(picOrder[3][4]));
    ui->pushButton_37->setIconSize(QSize(53, 53));
    ui->pushButton_37->setFlat(false);
    ui->pushButton_45->setIcon(getQicon(picOrder[3][5]));
    ui->pushButton_45->setIconSize(QSize(53, 53));
    ui->pushButton_45->setFlat(false);
    ui->pushButton_53->setIcon(getQicon(picOrder[3][6]));
    ui->pushButton_53->setIconSize(QSize(53, 53));
    ui->pushButton_53->setFlat(false);
    ui->pushButton_61->setIcon(getQicon(picOrder[3][7]));
    ui->pushButton_61->setIconSize(QSize(53, 53));
    ui->pushButton_61->setFlat(false);
    ui->pushButton_74->setIcon(getQicon(picOrder[3][8]));
    ui->pushButton_74->setIconSize(QSize(53, 53));
    ui->pushButton_74->setFlat(false);
    ui->pushButton_82->setIcon(getQicon(picOrder[3][9]));
    ui->pushButton_82->setIconSize(QSize(53, 53));
    ui->pushButton_82->setFlat(false);
    ui->pushButton_7->setIcon(getQicon(picOrder[4][0]));
    ui->pushButton_7->setIconSize(QSize(53, 53));
    ui->pushButton_7->setFlat(false);
    ui->pushButton_17->setIcon(getQicon(picOrder[4][1]));
    ui->pushButton_17->setIconSize(QSize(53, 53));
    ui->pushButton_17->setFlat(false);
    ui->pushButton_25->setIcon(getQicon(picOrder[4][2]));
    ui->pushButton_25->setIconSize(QSize(53, 53));
    ui->pushButton_25->setFlat(false);
    ui->pushButton_33->setIcon(getQicon(picOrder[4][3]));
    ui->pushButton_33->setIconSize(QSize(53, 53));
    ui->pushButton_33->setFlat(false);
    ui->pushButton_41->setIcon(getQicon(picOrder[4][4]));
    ui->pushButton_41->setIconSize(QSize(53, 53));
    ui->pushButton_41->setFlat(false);
    ui->pushButton_49->setIcon(getQicon(picOrder[4][5]));
    ui->pushButton_49->setIconSize(QSize(53, 53));
    ui->pushButton_49->setFlat(false);
    ui->pushButton_57->setIcon(getQicon(picOrder[4][6]));
    ui->pushButton_57->setIconSize(QSize(53, 53));
    ui->pushButton_57->setFlat(false);
    ui->pushButton_65->setIcon(getQicon(picOrder[4][7]));
    ui->pushButton_65->setIconSize(QSize(53, 53));
    ui->pushButton_65->setFlat(false);
    ui->pushButton_70->setIcon(getQicon(picOrder[4][8]));
    ui->pushButton_70->setIconSize(QSize(53, 53));
    ui->pushButton_70->setFlat(false);
    ui->pushButton_78->setIcon(getQicon(picOrder[4][9]));
    ui->pushButton_78->setIconSize(QSize(53, 53));
    ui->pushButton_78->setFlat(false);
    ui->pushButton_8->setIcon(getQicon(picOrder[5][0]));
    ui->pushButton_8->setIconSize(QSize(53, 53));
    ui->pushButton_8->setFlat(false);
    ui->pushButton_14->setIcon(getQicon(picOrder[5][1]));
    ui->pushButton_14->setIconSize(QSize(53, 53));
    ui->pushButton_14->setFlat(false);
    ui->pushButton_22->setIcon(getQicon(picOrder[5][2]));
    ui->pushButton_22->setIconSize(QSize(53, 53));
    ui->pushButton_22->setFlat(false);
    ui->pushButton_30->setIcon(getQicon(picOrder[5][3]));
    ui->pushButton_30->setIconSize(QSize(53, 53));
    ui->pushButton_30->setFlat(false);
    ui->pushButton_38->setIcon(getQicon(picOrder[5][4]));
    ui->pushButton_38->setIconSize(QSize(53, 53));
    ui->pushButton_38->setFlat(false);
    ui->pushButton_46->setIcon(getQicon(picOrder[5][5]));
    ui->pushButton_46->setIconSize(QSize(53, 53));
    ui->pushButton_46->setFlat(false);
    ui->pushButton_54->setIcon(getQicon(picOrder[5][6]));
    ui->pushButton_54->setIconSize(QSize(53, 53));
    ui->pushButton_54->setFlat(false);
    ui->pushButton_62->setIcon(getQicon(picOrder[5][7]));
    ui->pushButton_62->setIconSize(QSize(53, 53));
    ui->pushButton_62->setFlat(false);
    ui->pushButton_68->setIcon(getQicon(picOrder[5][8]));
    ui->pushButton_68->setIconSize(QSize(53, 53));
    ui->pushButton_68->setFlat(false);
    ui->pushButton_76->setIcon(getQicon(picOrder[5][9]));
    ui->pushButton_76->setIconSize(QSize(53, 53));
    ui->pushButton_76->setFlat(false);
    ui->pushButton_9->setIcon(getQicon(picOrder[6][0]));
    ui->pushButton_9->setIconSize(QSize(53, 53));
    ui->pushButton_9->setFlat(false);
    ui->pushButton_18->setIcon(getQicon(picOrder[6][1]));
    ui->pushButton_18->setIconSize(QSize(53, 53));
    ui->pushButton_18->setFlat(false);
    ui->pushButton_26->setIcon(getQicon(picOrder[6][2]));
    ui->pushButton_26->setIconSize(QSize(53, 53));
    ui->pushButton_26->setFlat(false);
    ui->pushButton_34->setIcon(getQicon(picOrder[6][3]));
    ui->pushButton_34->setIconSize(QSize(53, 53));
    ui->pushButton_34->setFlat(false);
    ui->pushButton_42->setIcon(getQicon(picOrder[6][4]));
    ui->pushButton_42->setIconSize(QSize(53, 53));
    ui->pushButton_42->setFlat(false);
    ui->pushButton_50->setIcon(getQicon(picOrder[6][5]));
    ui->pushButton_50->setIconSize(QSize(53, 53));
    ui->pushButton_50->setFlat(false);
    ui->pushButton_58->setIcon(getQicon(picOrder[6][6]));
    ui->pushButton_58->setIconSize(QSize(53, 53));
    ui->pushButton_58->setFlat(false);
    ui->pushButton_66->setIcon(getQicon(picOrder[6][7]));
    ui->pushButton_66->setIconSize(QSize(53, 53));
    ui->pushButton_66->setFlat(false);
    ui->pushButton_69->setIcon(getQicon(picOrder[6][8]));
    ui->pushButton_69->setIconSize(QSize(53, 53));
    ui->pushButton_69->setFlat(false);
    ui->pushButton_77->setIcon(getQicon(picOrder[6][9]));
    ui->pushButton_77->setIconSize(QSize(53, 53));
    ui->pushButton_77->setFlat(false);
    ui->pushButton_10->setIcon(getQicon(picOrder[7][0]));
    ui->pushButton_10->setIconSize(QSize(53, 53));
    ui->pushButton_10->setFlat(false);
    ui->pushButton_11->setIcon(getQicon(picOrder[7][1]));
    ui->pushButton_11->setIconSize(QSize(53, 53));
    ui->pushButton_11->setFlat(false);
    ui->pushButton_19->setIcon(getQicon(picOrder[7][2]));
    ui->pushButton_19->setIconSize(QSize(53, 53));
    ui->pushButton_19->setFlat(false);
    ui->pushButton_27->setIcon(getQicon(picOrder[7][3]));
    ui->pushButton_27->setIconSize(QSize(53, 53));
    ui->pushButton_27->setFlat(false);
    ui->pushButton_35->setIcon(getQicon(picOrder[7][4]));
    ui->pushButton_35->setIconSize(QSize(53, 53));
    ui->pushButton_35->setFlat(false);
    ui->pushButton_43->setIcon(getQicon(picOrder[7][5]));
    ui->pushButton_43->setIconSize(QSize(53, 53));
    ui->pushButton_43->setFlat(false);
    ui->pushButton_51->setIcon(getQicon(picOrder[7][6]));
    ui->pushButton_51->setIconSize(QSize(53, 53));
    ui->pushButton_51->setFlat(false);
    ui->pushButton_59->setIcon(getQicon(picOrder[7][7]));
    ui->pushButton_59->setIconSize(QSize(53, 53));
    ui->pushButton_59->setFlat(false);
    ui->pushButton_73->setIcon(getQicon(picOrder[7][8]));
    ui->pushButton_73->setIconSize(QSize(53, 53));
    ui->pushButton_73->setFlat(false);
    ui->pushButton_81->setIcon(getQicon(picOrder[7][9]));
    ui->pushButton_81->setIconSize(QSize(53, 53));
    ui->pushButton_81->setFlat(false);
}

void MainWindow2::normal()
{
    tempBlock1 = create1->normal();
    for(int i = 0;i<8;i++){
        for(int j = 0;j<10;j++){
            picOrder[i][j] = tempBlock1[i][j]->num - 1;
        }
    }
    //QIcon qicon1(QString::fromStdString(getPicTypeName(0)));
    //QIcon qicon2(QString::fromStdString(getPicTypeName(1)));
    //QIcon qicon3(QString::fromStdString(getPicTypeName(2)));
    //QIcon qicon4(QString::fromStdString(getPicTypeName(3)));
    //QIcon qicon5(QString::fromStdString(getPicTypeName(4)));
    ui->pushButton_3->setIcon(getQicon(picOrder[0][0]));
    ui->pushButton_3->setIconSize(QSize(53, 53));
    ui->pushButton_3->setFlat(false);
    ui->pushButton_16->setIcon(getQicon(picOrder[0][1]));
    ui->pushButton_16->setIconSize(QSize(53, 53));
    ui->pushButton_16->setFlat(false);
    ui->pushButton_24->setIcon(getQicon(picOrder[0][2]));
    ui->pushButton_24->setIconSize(QSize(53, 53));
    ui->pushButton_24->setFlat(false);
    ui->pushButton_32->setIcon(getQicon(picOrder[0][3]));
    ui->pushButton_32->setIconSize(QSize(53, 53));
    ui->pushButton_32->setFlat(false);
    ui->pushButton_40->setIcon(getQicon(picOrder[0][4]));
    ui->pushButton_40->setIconSize(QSize(53, 53));
    ui->pushButton_40->setFlat(false);
    ui->pushButton_48->setIcon(getQicon(picOrder[0][5]));
    ui->pushButton_48->setIconSize(QSize(53, 53));
    ui->pushButton_48->setFlat(false);
    ui->pushButton_56->setIcon(getQicon(picOrder[0][6]));
    ui->pushButton_56->setIconSize(QSize(53, 53));
    ui->pushButton_56->setFlat(false);
    ui->pushButton_64->setIcon(getQicon(picOrder[0][7]));
    ui->pushButton_64->setIconSize(QSize(53, 53));
    ui->pushButton_64->setFlat(false);
    ui->pushButton_71->setIcon(getQicon(picOrder[0][8]));
    ui->pushButton_71->setIconSize(QSize(53, 53));
    ui->pushButton_71->setFlat(false);
    ui->pushButton_79->setIcon(getQicon(picOrder[0][9]));
    ui->pushButton_79->setIconSize(QSize(53, 53));
    ui->pushButton_79->setFlat(false);
    ui->pushButton_4->setIcon(getQicon(picOrder[1][0]));
    ui->pushButton_4->setIconSize(QSize(53, 53));
    ui->pushButton_4->setFlat(false);
    ui->pushButton_15->setIcon(getQicon(picOrder[1][1]));
    ui->pushButton_15->setIconSize(QSize(53, 53));
    ui->pushButton_15->setFlat(false);
    ui->pushButton_23->setIcon(getQicon(picOrder[1][2]));
    ui->pushButton_23->setIconSize(QSize(53, 53));
    ui->pushButton_23->setFlat(false);
    ui->pushButton_31->setIcon(getQicon(picOrder[1][3]));
    ui->pushButton_31->setIconSize(QSize(53, 53));
    ui->pushButton_31->setFlat(false);
    ui->pushButton_39->setIcon(getQicon(picOrder[1][4]));
    ui->pushButton_39->setIconSize(QSize(53, 53));
    ui->pushButton_39->setFlat(false);
    ui->pushButton_47->setIcon(getQicon(picOrder[1][5]));
    ui->pushButton_47->setIconSize(QSize(53, 53));
    ui->pushButton_47->setFlat(false);
    ui->pushButton_55->setIcon(getQicon(picOrder[1][6]));
    ui->pushButton_55->setIconSize(QSize(53, 53));
    ui->pushButton_55->setFlat(false);
    ui->pushButton_63->setIcon(getQicon(picOrder[1][7]));
    ui->pushButton_63->setIconSize(QSize(53, 53));
    ui->pushButton_63->setFlat(false);
    ui->pushButton_67->setIcon(getQicon(picOrder[1][8]));
    ui->pushButton_67->setIconSize(QSize(53, 53));
    ui->pushButton_67->setFlat(false);
    ui->pushButton_75->setIcon(getQicon(picOrder[1][9]));
    ui->pushButton_75->setIconSize(QSize(53, 53));
    ui->pushButton_75->setFlat(false);
    ui->pushButton_5->setIcon(getQicon(picOrder[2][0]));
    ui->pushButton_5->setIconSize(QSize(53, 53));
    ui->pushButton_5->setFlat(false);
    ui->pushButton_12->setIcon(getQicon(picOrder[2][1]));
    ui->pushButton_12->setIconSize(QSize(53, 53));
    ui->pushButton_12->setFlat(false);
    ui->pushButton_20->setIcon(getQicon(picOrder[2][2]));
    ui->pushButton_20->setIconSize(QSize(53, 53));
    ui->pushButton_20->setFlat(false);
    ui->pushButton_28->setIcon(getQicon(picOrder[2][3]));
    ui->pushButton_28->setIconSize(QSize(53, 53));
    ui->pushButton_28->setFlat(false);
    ui->pushButton_36->setIcon(getQicon(picOrder[2][4]));
    ui->pushButton_36->setIconSize(QSize(53, 53));
    ui->pushButton_36->setFlat(false);
    ui->pushButton_44->setIcon(getQicon(picOrder[2][5]));
    ui->pushButton_44->setIconSize(QSize(53, 53));
    ui->pushButton_44->setFlat(false);
    ui->pushButton_52->setIcon(getQicon(picOrder[2][6]));
    ui->pushButton_52->setIconSize(QSize(53, 53));
    ui->pushButton_52->setFlat(false);
    ui->pushButton_60->setIcon(getQicon(picOrder[2][7]));
    ui->pushButton_60->setIconSize(QSize(53, 53));
    ui->pushButton_60->setFlat(false);
    ui->pushButton_72->setIcon(getQicon(picOrder[2][8]));
    ui->pushButton_72->setIconSize(QSize(53, 53));
    ui->pushButton_72->setFlat(false);
    ui->pushButton_80->setIcon(getQicon(picOrder[2][9]));
    ui->pushButton_80->setIconSize(QSize(53, 53));
    ui->pushButton_80->setFlat(false);
    ui->pushButton_6->setIcon(getQicon(picOrder[3][0]));
    ui->pushButton_6->setIconSize(QSize(53, 53));
    ui->pushButton_6->setFlat(false);
    ui->pushButton_13->setIcon(getQicon(picOrder[3][1]));
    ui->pushButton_13->setIconSize(QSize(53, 53));
    ui->pushButton_13->setFlat(false);
    ui->pushButton_21->setIcon(getQicon(picOrder[3][2]));
    ui->pushButton_21->setIconSize(QSize(53, 53));
    ui->pushButton_21->setFlat(false);
    ui->pushButton_29->setIcon(getQicon(picOrder[3][3]));
    ui->pushButton_29->setIconSize(QSize(53, 53));
    ui->pushButton_29->setFlat(false);
    ui->pushButton_37->setIcon(getQicon(picOrder[3][4]));
    ui->pushButton_37->setIconSize(QSize(53, 53));
    ui->pushButton_37->setFlat(false);
    ui->pushButton_45->setIcon(getQicon(picOrder[3][5]));
    ui->pushButton_45->setIconSize(QSize(53, 53));
    ui->pushButton_45->setFlat(false);
    ui->pushButton_53->setIcon(getQicon(picOrder[3][6]));
    ui->pushButton_53->setIconSize(QSize(53, 53));
    ui->pushButton_53->setFlat(false);
    ui->pushButton_61->setIcon(getQicon(picOrder[3][7]));
    ui->pushButton_61->setIconSize(QSize(53, 53));
    ui->pushButton_61->setFlat(false);
    ui->pushButton_74->setIcon(getQicon(picOrder[3][8]));
    ui->pushButton_74->setIconSize(QSize(53, 53));
    ui->pushButton_74->setFlat(false);
    ui->pushButton_82->setIcon(getQicon(picOrder[3][9]));
    ui->pushButton_82->setIconSize(QSize(53, 53));
    ui->pushButton_82->setFlat(false);
    ui->pushButton_7->setIcon(getQicon(picOrder[4][0]));
    ui->pushButton_7->setIconSize(QSize(53, 53));
    ui->pushButton_7->setFlat(false);
    ui->pushButton_17->setIcon(getQicon(picOrder[4][1]));
    ui->pushButton_17->setIconSize(QSize(53, 53));
    ui->pushButton_17->setFlat(false);
    ui->pushButton_25->setIcon(getQicon(picOrder[4][2]));
    ui->pushButton_25->setIconSize(QSize(53, 53));
    ui->pushButton_25->setFlat(false);
    ui->pushButton_33->setIcon(getQicon(picOrder[4][3]));
    ui->pushButton_33->setIconSize(QSize(53, 53));
    ui->pushButton_33->setFlat(false);
    ui->pushButton_41->setIcon(getQicon(picOrder[4][4]));
    ui->pushButton_41->setIconSize(QSize(53, 53));
    ui->pushButton_41->setFlat(false);
    ui->pushButton_49->setIcon(getQicon(picOrder[4][5]));
    ui->pushButton_49->setIconSize(QSize(53, 53));
    ui->pushButton_49->setFlat(false);
    ui->pushButton_57->setIcon(getQicon(picOrder[4][6]));
    ui->pushButton_57->setIconSize(QSize(53, 53));
    ui->pushButton_57->setFlat(false);
    ui->pushButton_65->setIcon(getQicon(picOrder[4][7]));
    ui->pushButton_65->setIconSize(QSize(53, 53));
    ui->pushButton_65->setFlat(false);
    ui->pushButton_70->setIcon(getQicon(picOrder[4][8]));
    ui->pushButton_70->setIconSize(QSize(53, 53));
    ui->pushButton_70->setFlat(false);
    ui->pushButton_78->setIcon(getQicon(picOrder[4][9]));
    ui->pushButton_78->setIconSize(QSize(53, 53));
    ui->pushButton_78->setFlat(false);
    ui->pushButton_8->setIcon(getQicon(picOrder[5][0]));
    ui->pushButton_8->setIconSize(QSize(53, 53));
    ui->pushButton_8->setFlat(false);
    ui->pushButton_14->setIcon(getQicon(picOrder[5][1]));
    ui->pushButton_14->setIconSize(QSize(53, 53));
    ui->pushButton_14->setFlat(false);
    ui->pushButton_22->setIcon(getQicon(picOrder[5][2]));
    ui->pushButton_22->setIconSize(QSize(53, 53));
    ui->pushButton_22->setFlat(false);
    ui->pushButton_30->setIcon(getQicon(picOrder[5][3]));
    ui->pushButton_30->setIconSize(QSize(53, 53));
    ui->pushButton_30->setFlat(false);
    ui->pushButton_38->setIcon(getQicon(picOrder[5][4]));
    ui->pushButton_38->setIconSize(QSize(53, 53));
    ui->pushButton_38->setFlat(false);
    ui->pushButton_46->setIcon(getQicon(picOrder[5][5]));
    ui->pushButton_46->setIconSize(QSize(53, 53));
    ui->pushButton_46->setFlat(false);
    ui->pushButton_54->setIcon(getQicon(picOrder[5][6]));
    ui->pushButton_54->setIconSize(QSize(53, 53));
    ui->pushButton_54->setFlat(false);
    ui->pushButton_62->setIcon(getQicon(picOrder[5][7]));
    ui->pushButton_62->setIconSize(QSize(53, 53));
    ui->pushButton_62->setFlat(false);
    ui->pushButton_68->setIcon(getQicon(picOrder[5][8]));
    ui->pushButton_68->setIconSize(QSize(53, 53));
    ui->pushButton_68->setFlat(false);
    ui->pushButton_76->setIcon(getQicon(picOrder[5][9]));
    ui->pushButton_76->setIconSize(QSize(53, 53));
    ui->pushButton_76->setFlat(false);
    ui->pushButton_9->setIcon(getQicon(picOrder[6][0]));
    ui->pushButton_9->setIconSize(QSize(53, 53));
    ui->pushButton_9->setFlat(false);
    ui->pushButton_18->setIcon(getQicon(picOrder[6][1]));
    ui->pushButton_18->setIconSize(QSize(53, 53));
    ui->pushButton_18->setFlat(false);
    ui->pushButton_26->setIcon(getQicon(picOrder[6][2]));
    ui->pushButton_26->setIconSize(QSize(53, 53));
    ui->pushButton_26->setFlat(false);
    ui->pushButton_34->setIcon(getQicon(picOrder[6][3]));
    ui->pushButton_34->setIconSize(QSize(53, 53));
    ui->pushButton_34->setFlat(false);
    ui->pushButton_42->setIcon(getQicon(picOrder[6][4]));
    ui->pushButton_42->setIconSize(QSize(53, 53));
    ui->pushButton_42->setFlat(false);
    ui->pushButton_50->setIcon(getQicon(picOrder[6][5]));
    ui->pushButton_50->setIconSize(QSize(53, 53));
    ui->pushButton_50->setFlat(false);
    ui->pushButton_58->setIcon(getQicon(picOrder[6][6]));
    ui->pushButton_58->setIconSize(QSize(53, 53));
    ui->pushButton_58->setFlat(false);
    ui->pushButton_66->setIcon(getQicon(picOrder[6][7]));
    ui->pushButton_66->setIconSize(QSize(53, 53));
    ui->pushButton_66->setFlat(false);
    ui->pushButton_69->setIcon(getQicon(picOrder[6][8]));
    ui->pushButton_69->setIconSize(QSize(53, 53));
    ui->pushButton_69->setFlat(false);
    ui->pushButton_77->setIcon(getQicon(picOrder[6][9]));
    ui->pushButton_77->setIconSize(QSize(53, 53));
    ui->pushButton_77->setFlat(false);
    ui->pushButton_10->setIcon(getQicon(picOrder[7][0]));
    ui->pushButton_10->setIconSize(QSize(53, 53));
    ui->pushButton_10->setFlat(false);
    ui->pushButton_11->setIcon(getQicon(picOrder[7][1]));
    ui->pushButton_11->setIconSize(QSize(53, 53));
    ui->pushButton_11->setFlat(false);
    ui->pushButton_19->setIcon(getQicon(picOrder[7][2]));
    ui->pushButton_19->setIconSize(QSize(53, 53));
    ui->pushButton_19->setFlat(false);
    ui->pushButton_27->setIcon(getQicon(picOrder[7][3]));
    ui->pushButton_27->setIconSize(QSize(53, 53));
    ui->pushButton_27->setFlat(false);
    ui->pushButton_35->setIcon(getQicon(picOrder[7][4]));
    ui->pushButton_35->setIconSize(QSize(53, 53));
    ui->pushButton_35->setFlat(false);
    ui->pushButton_43->setIcon(getQicon(picOrder[7][5]));
    ui->pushButton_43->setIconSize(QSize(53, 53));
    ui->pushButton_43->setFlat(false);
    ui->pushButton_51->setIcon(getQicon(picOrder[7][6]));
    ui->pushButton_51->setIconSize(QSize(53, 53));
    ui->pushButton_51->setFlat(false);
    ui->pushButton_59->setIcon(getQicon(picOrder[7][7]));
    ui->pushButton_59->setIconSize(QSize(53, 53));
    ui->pushButton_59->setFlat(false);
    ui->pushButton_73->setIcon(getQicon(picOrder[7][8]));
    ui->pushButton_73->setIconSize(QSize(53, 53));
    ui->pushButton_73->setFlat(false);
    ui->pushButton_81->setIcon(getQicon(picOrder[7][9]));
    ui->pushButton_81->setIconSize(QSize(53, 53));
    ui->pushButton_81->setFlat(false);
}

void MainWindow2::hard()
{
    tempBlock1 = create1->hard();
    for(int i = 0;i<8;i++){
        for(int j = 0;j<10;j++){
            picOrder[i][j] = tempBlock1[i][j]->num - 1;
        }
    }
    //QIcon qicon1(QString::fromStdString(getPicTypeName(0)));
    //QIcon qicon2(QString::fromStdString(getPicTypeName(1)));
    //QIcon qicon3(QString::fromStdString(getPicTypeName(2)));
    //QIcon qicon4(QString::fromStdString(getPicTypeName(3)));
    //QIcon qicon5(QString::fromStdString(getPicTypeName(4)));
    ui->pushButton_3->setIcon(getQicon(picOrder[0][0]));
    ui->pushButton_3->setIconSize(QSize(53, 53));
    ui->pushButton_3->setFlat(false);
    ui->pushButton_16->setIcon(getQicon(picOrder[0][1]));
    ui->pushButton_16->setIconSize(QSize(53, 53));
    ui->pushButton_16->setFlat(false);
    ui->pushButton_24->setIcon(getQicon(picOrder[0][2]));
    ui->pushButton_24->setIconSize(QSize(53, 53));
    ui->pushButton_24->setFlat(false);
    ui->pushButton_32->setIcon(getQicon(picOrder[0][3]));
    ui->pushButton_32->setIconSize(QSize(53, 53));
    ui->pushButton_32->setFlat(false);
    ui->pushButton_40->setIcon(getQicon(picOrder[0][4]));
    ui->pushButton_40->setIconSize(QSize(53, 53));
    ui->pushButton_40->setFlat(false);
    ui->pushButton_48->setIcon(getQicon(picOrder[0][5]));
    ui->pushButton_48->setIconSize(QSize(53, 53));
    ui->pushButton_48->setFlat(false);
    ui->pushButton_56->setIcon(getQicon(picOrder[0][6]));
    ui->pushButton_56->setIconSize(QSize(53, 53));
    ui->pushButton_56->setFlat(false);
    ui->pushButton_64->setIcon(getQicon(picOrder[0][7]));
    ui->pushButton_64->setIconSize(QSize(53, 53));
    ui->pushButton_64->setFlat(false);
    ui->pushButton_71->setIcon(getQicon(picOrder[0][8]));
    ui->pushButton_71->setIconSize(QSize(53, 53));
    ui->pushButton_71->setFlat(false);
    ui->pushButton_79->setIcon(getQicon(picOrder[0][9]));
    ui->pushButton_79->setIconSize(QSize(53, 53));
    ui->pushButton_79->setFlat(false);
    ui->pushButton_4->setIcon(getQicon(picOrder[1][0]));
    ui->pushButton_4->setIconSize(QSize(53, 53));
    ui->pushButton_4->setFlat(false);
    ui->pushButton_15->setIcon(getQicon(picOrder[1][1]));
    ui->pushButton_15->setIconSize(QSize(53, 53));
    ui->pushButton_15->setFlat(false);
    ui->pushButton_23->setIcon(getQicon(picOrder[1][2]));
    ui->pushButton_23->setIconSize(QSize(53, 53));
    ui->pushButton_23->setFlat(false);
    ui->pushButton_31->setIcon(getQicon(picOrder[1][3]));
    ui->pushButton_31->setIconSize(QSize(53, 53));
    ui->pushButton_31->setFlat(false);
    ui->pushButton_39->setIcon(getQicon(picOrder[1][4]));
    ui->pushButton_39->setIconSize(QSize(53, 53));
    ui->pushButton_39->setFlat(false);
    ui->pushButton_47->setIcon(getQicon(picOrder[1][5]));
    ui->pushButton_47->setIconSize(QSize(53, 53));
    ui->pushButton_47->setFlat(false);
    ui->pushButton_55->setIcon(getQicon(picOrder[1][6]));
    ui->pushButton_55->setIconSize(QSize(53, 53));
    ui->pushButton_55->setFlat(false);
    ui->pushButton_63->setIcon(getQicon(picOrder[1][7]));
    ui->pushButton_63->setIconSize(QSize(53, 53));
    ui->pushButton_63->setFlat(false);
    ui->pushButton_67->setIcon(getQicon(picOrder[1][8]));
    ui->pushButton_67->setIconSize(QSize(53, 53));
    ui->pushButton_67->setFlat(false);
    ui->pushButton_75->setIcon(getQicon(picOrder[1][9]));
    ui->pushButton_75->setIconSize(QSize(53, 53));
    ui->pushButton_75->setFlat(false);
    ui->pushButton_5->setIcon(getQicon(picOrder[2][0]));
    ui->pushButton_5->setIconSize(QSize(53, 53));
    ui->pushButton_5->setFlat(false);
    ui->pushButton_12->setIcon(getQicon(picOrder[2][1]));
    ui->pushButton_12->setIconSize(QSize(53, 53));
    ui->pushButton_12->setFlat(false);
    ui->pushButton_20->setIcon(getQicon(picOrder[2][2]));
    ui->pushButton_20->setIconSize(QSize(53, 53));
    ui->pushButton_20->setFlat(false);
    ui->pushButton_28->setIcon(getQicon(picOrder[2][3]));
    ui->pushButton_28->setIconSize(QSize(53, 53));
    ui->pushButton_28->setFlat(false);
    ui->pushButton_36->setIcon(getQicon(picOrder[2][4]));
    ui->pushButton_36->setIconSize(QSize(53, 53));
    ui->pushButton_36->setFlat(false);
    ui->pushButton_44->setIcon(getQicon(picOrder[2][5]));
    ui->pushButton_44->setIconSize(QSize(53, 53));
    ui->pushButton_44->setFlat(false);
    ui->pushButton_52->setIcon(getQicon(picOrder[2][6]));
    ui->pushButton_52->setIconSize(QSize(53, 53));
    ui->pushButton_52->setFlat(false);
    ui->pushButton_60->setIcon(getQicon(picOrder[2][7]));
    ui->pushButton_60->setIconSize(QSize(53, 53));
    ui->pushButton_60->setFlat(false);
    ui->pushButton_72->setIcon(getQicon(picOrder[2][8]));
    ui->pushButton_72->setIconSize(QSize(53, 53));
    ui->pushButton_72->setFlat(false);
    ui->pushButton_80->setIcon(getQicon(picOrder[2][9]));
    ui->pushButton_80->setIconSize(QSize(53, 53));
    ui->pushButton_80->setFlat(false);
    ui->pushButton_6->setIcon(getQicon(picOrder[3][0]));
    ui->pushButton_6->setIconSize(QSize(53, 53));
    ui->pushButton_6->setFlat(false);
    ui->pushButton_13->setIcon(getQicon(picOrder[3][1]));
    ui->pushButton_13->setIconSize(QSize(53, 53));
    ui->pushButton_13->setFlat(false);
    ui->pushButton_21->setIcon(getQicon(picOrder[3][2]));
    ui->pushButton_21->setIconSize(QSize(53, 53));
    ui->pushButton_21->setFlat(false);
    ui->pushButton_29->setIcon(getQicon(picOrder[3][3]));
    ui->pushButton_29->setIconSize(QSize(53, 53));
    ui->pushButton_29->setFlat(false);
    ui->pushButton_37->setIcon(getQicon(picOrder[3][4]));
    ui->pushButton_37->setIconSize(QSize(53, 53));
    ui->pushButton_37->setFlat(false);
    ui->pushButton_45->setIcon(getQicon(picOrder[3][5]));
    ui->pushButton_45->setIconSize(QSize(53, 53));
    ui->pushButton_45->setFlat(false);
    ui->pushButton_53->setIcon(getQicon(picOrder[3][6]));
    ui->pushButton_53->setIconSize(QSize(53, 53));
    ui->pushButton_53->setFlat(false);
    ui->pushButton_61->setIcon(getQicon(picOrder[3][7]));
    ui->pushButton_61->setIconSize(QSize(53, 53));
    ui->pushButton_61->setFlat(false);
    ui->pushButton_74->setIcon(getQicon(picOrder[3][8]));
    ui->pushButton_74->setIconSize(QSize(53, 53));
    ui->pushButton_74->setFlat(false);
    ui->pushButton_82->setIcon(getQicon(picOrder[3][9]));
    ui->pushButton_82->setIconSize(QSize(53, 53));
    ui->pushButton_82->setFlat(false);
    ui->pushButton_7->setIcon(getQicon(picOrder[4][0]));
    ui->pushButton_7->setIconSize(QSize(53, 53));
    ui->pushButton_7->setFlat(false);
    ui->pushButton_17->setIcon(getQicon(picOrder[4][1]));
    ui->pushButton_17->setIconSize(QSize(53, 53));
    ui->pushButton_17->setFlat(false);
    ui->pushButton_25->setIcon(getQicon(picOrder[4][2]));
    ui->pushButton_25->setIconSize(QSize(53, 53));
    ui->pushButton_25->setFlat(false);
    ui->pushButton_33->setIcon(getQicon(picOrder[4][3]));
    ui->pushButton_33->setIconSize(QSize(53, 53));
    ui->pushButton_33->setFlat(false);
    ui->pushButton_41->setIcon(getQicon(picOrder[4][4]));
    ui->pushButton_41->setIconSize(QSize(53, 53));
    ui->pushButton_41->setFlat(false);
    ui->pushButton_49->setIcon(getQicon(picOrder[4][5]));
    ui->pushButton_49->setIconSize(QSize(53, 53));
    ui->pushButton_49->setFlat(false);
    ui->pushButton_57->setIcon(getQicon(picOrder[4][6]));
    ui->pushButton_57->setIconSize(QSize(53, 53));
    ui->pushButton_57->setFlat(false);
    ui->pushButton_65->setIcon(getQicon(picOrder[4][7]));
    ui->pushButton_65->setIconSize(QSize(53, 53));
    ui->pushButton_65->setFlat(false);
    ui->pushButton_70->setIcon(getQicon(picOrder[4][8]));
    ui->pushButton_70->setIconSize(QSize(53, 53));
    ui->pushButton_70->setFlat(false);
    ui->pushButton_78->setIcon(getQicon(picOrder[4][9]));
    ui->pushButton_78->setIconSize(QSize(53, 53));
    ui->pushButton_78->setFlat(false);
    ui->pushButton_8->setIcon(getQicon(picOrder[5][0]));
    ui->pushButton_8->setIconSize(QSize(53, 53));
    ui->pushButton_8->setFlat(false);
    ui->pushButton_14->setIcon(getQicon(picOrder[5][1]));
    ui->pushButton_14->setIconSize(QSize(53, 53));
    ui->pushButton_14->setFlat(false);
    ui->pushButton_22->setIcon(getQicon(picOrder[5][2]));
    ui->pushButton_22->setIconSize(QSize(53, 53));
    ui->pushButton_22->setFlat(false);
    ui->pushButton_30->setIcon(getQicon(picOrder[5][3]));
    ui->pushButton_30->setIconSize(QSize(53, 53));
    ui->pushButton_30->setFlat(false);
    ui->pushButton_38->setIcon(getQicon(picOrder[5][4]));
    ui->pushButton_38->setIconSize(QSize(53, 53));
    ui->pushButton_38->setFlat(false);
    ui->pushButton_46->setIcon(getQicon(picOrder[5][5]));
    ui->pushButton_46->setIconSize(QSize(53, 53));
    ui->pushButton_46->setFlat(false);
    ui->pushButton_54->setIcon(getQicon(picOrder[5][6]));
    ui->pushButton_54->setIconSize(QSize(53, 53));
    ui->pushButton_54->setFlat(false);
    ui->pushButton_62->setIcon(getQicon(picOrder[5][7]));
    ui->pushButton_62->setIconSize(QSize(53, 53));
    ui->pushButton_62->setFlat(false);
    ui->pushButton_68->setIcon(getQicon(picOrder[5][8]));
    ui->pushButton_68->setIconSize(QSize(53, 53));
    ui->pushButton_68->setFlat(false);
    ui->pushButton_76->setIcon(getQicon(picOrder[5][9]));
    ui->pushButton_76->setIconSize(QSize(53, 53));
    ui->pushButton_76->setFlat(false);
    ui->pushButton_9->setIcon(getQicon(picOrder[6][0]));
    ui->pushButton_9->setIconSize(QSize(53, 53));
    ui->pushButton_9->setFlat(false);
    ui->pushButton_18->setIcon(getQicon(picOrder[6][1]));
    ui->pushButton_18->setIconSize(QSize(53, 53));
    ui->pushButton_18->setFlat(false);
    ui->pushButton_26->setIcon(getQicon(picOrder[6][2]));
    ui->pushButton_26->setIconSize(QSize(53, 53));
    ui->pushButton_26->setFlat(false);
    ui->pushButton_34->setIcon(getQicon(picOrder[6][3]));
    ui->pushButton_34->setIconSize(QSize(53, 53));
    ui->pushButton_34->setFlat(false);
    ui->pushButton_42->setIcon(getQicon(picOrder[6][4]));
    ui->pushButton_42->setIconSize(QSize(53, 53));
    ui->pushButton_42->setFlat(false);
    ui->pushButton_50->setIcon(getQicon(picOrder[6][5]));
    ui->pushButton_50->setIconSize(QSize(53, 53));
    ui->pushButton_50->setFlat(false);
    ui->pushButton_58->setIcon(getQicon(picOrder[6][6]));
    ui->pushButton_58->setIconSize(QSize(53, 53));
    ui->pushButton_58->setFlat(false);
    ui->pushButton_66->setIcon(getQicon(picOrder[6][7]));
    ui->pushButton_66->setIconSize(QSize(53, 53));
    ui->pushButton_66->setFlat(false);
    ui->pushButton_69->setIcon(getQicon(picOrder[6][8]));
    ui->pushButton_69->setIconSize(QSize(53, 53));
    ui->pushButton_69->setFlat(false);
    ui->pushButton_77->setIcon(getQicon(picOrder[6][9]));
    ui->pushButton_77->setIconSize(QSize(53, 53));
    ui->pushButton_77->setFlat(false);
    ui->pushButton_10->setIcon(getQicon(picOrder[7][0]));
    ui->pushButton_10->setIconSize(QSize(53, 53));
    ui->pushButton_10->setFlat(false);
    ui->pushButton_11->setIcon(getQicon(picOrder[7][1]));
    ui->pushButton_11->setIconSize(QSize(53, 53));
    ui->pushButton_11->setFlat(false);
    ui->pushButton_19->setIcon(getQicon(picOrder[7][2]));
    ui->pushButton_19->setIconSize(QSize(53, 53));
    ui->pushButton_19->setFlat(false);
    ui->pushButton_27->setIcon(getQicon(picOrder[7][3]));
    ui->pushButton_27->setIconSize(QSize(53, 53));
    ui->pushButton_27->setFlat(false);
    ui->pushButton_35->setIcon(getQicon(picOrder[7][4]));
    ui->pushButton_35->setIconSize(QSize(53, 53));
    ui->pushButton_35->setFlat(false);
    ui->pushButton_43->setIcon(getQicon(picOrder[7][5]));
    ui->pushButton_43->setIconSize(QSize(53, 53));
    ui->pushButton_43->setFlat(false);
    ui->pushButton_51->setIcon(getQicon(picOrder[7][6]));
    ui->pushButton_51->setIconSize(QSize(53, 53));
    ui->pushButton_51->setFlat(false);
    ui->pushButton_59->setIcon(getQicon(picOrder[7][7]));
    ui->pushButton_59->setIconSize(QSize(53, 53));
    ui->pushButton_59->setFlat(false);
    ui->pushButton_73->setIcon(getQicon(picOrder[7][8]));
    ui->pushButton_73->setIconSize(QSize(53, 53));
    ui->pushButton_73->setFlat(false);
    ui->pushButton_81->setIcon(getQicon(picOrder[7][9]));
    ui->pushButton_81->setIconSize(QSize(53, 53));
    ui->pushButton_81->setFlat(false);
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
    //qPushButton1 = ui->pushButton;
    qPushButton2 = ui->pushButton_84;
    //QIcon qicon1(QString::fromStdString(getPicTypeName(picOrder[0][0])));
    //qPushButton2->setIcon(qicon1);
    //qPushButton2->setIconSize(QSize(53, 53));
    //qPushButton2->setFlat(false);
    for(int i = 0;i<8;i++){
        for(int j = 0;j<10;j++){
            matrix[i][j] = 1;
            picOrder[i][j] = 0;
        }
    }
    //count1 = 600;
    //qtimer1 = new QTimer(this);
    //qtimer1.
    //qtimer1.start(1000);
    create1 = new Create(8, 10);
}

void MainWindow2::init()
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<10; j++)
        {
            visitedNumber[i][j]=0;
            InitQueueTemp(&queueOrder[i][j]);
            prev[i][j].x=-1;
            prev[i][j].y=-1;
        }
    }
}

int MainWindow2::canConnect(int a, int b, int c, int d)
{
    int x,y;
    int direction;
    int mark;
    init();
    Queue* Q=(Queue*)malloc(sizeof(Queue));
    InitQueue(Q);
    Enqueue(Q,a,b,0,0);
    visitedNumber[a][b]++;
    EnqueueTemp(&queueOrder[a][b],-1,-1,0);
    while(!isEmpty(Q))
    {
        node* nod=Q->head;
        x=nod->x;
        y=nod->y;
        direction=nod->direction;
        //判断上方是否有空位
        if(x!=0&&direction!=3)
        {
            if(matrix[x-1][y]==0||x-1==c&&y==d)
            {
                mark=nod->mark;
                if(direction!=1&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("1(%d,%d)->",x-1,y);
                    visitedNumber[x-1][y]++;
                    EnqueueTemp(&queueOrder[x-1][y],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x-1,y,1,mark);
                    if(x-1==c&&y==d)
                        break;
                }
            }
        }
        //判断下方是否有空位
        if(x!=num1-1&&direction!=1)
        {
            if(matrix[x+1][y]==0||x+1==c&&y==d)
            {
                mark=nod->mark;
                if(direction!=3&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("3(%d,%d)->",x+1,y);
                    visitedNumber[x+1][y]++;
                    EnqueueTemp(&queueOrder[x+1][y],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x+1,y,3,mark);
                    if(x+1==c&&y==d)
                        break;
                }
            }
        }
        //判断左方是否有空位
        if(y!=0&&direction!=2)
        {
            if(matrix[x][y-1]==0||x==c&&y-1==d)
            {
                mark=nod->mark;
                if(direction!=4&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("4(%d,%d)->",x,y-1);
                    visitedNumber[x][y-1]++;
                    EnqueueTemp(&queueOrder[x][y-1],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x,y-1,4,mark);
                    if(x==c&&y-1==d)
                        break;
                }
            }
        }
        //判断右方是否有空位
        if(y!=num2-1&&direction!=4)
        {
            if(matrix[x][y+1]==0||x==c&&y+1==d)
            {
                mark=nod->mark;
                if(direction!=2&&direction!=0)
                {
                    mark++;
                }
                if(mark<3)
                {
                    //printf("2(%d,%d)->",x,y+1);
                    visitedNumber[x][y+1]++;
                    EnqueueTemp(&queueOrder[x][y+1],x,y,visitedNumber[x][y]);

                    Enqueue(Q,x,y+1,2,mark);
                    if(x==c&&y+1==d)
                        break;
                }
            }
        }
        DeQueue(Q);
    }


    if(visitedNumber[c][d]==0)
    {
        return 0;
    }
    else
    {
        int m=c;
        int n=d;
        nod* Nod;
    Nod=getNod(&queueOrder[c][d],visitedNumber[c][d]);
        int Num=visitedNumber[m][n];
        while(Nod->x!=-1)
        {
            prev[m][n].x=Nod->x;
            prev[m][n].y=Nod->y;
            m=Nod->x;
            n=Nod->y;
            Num=Nod->Order;
            Nod=getNod(&queueOrder[m][n],Num);
        }
        //通过前驱数组输出拐点
        int o=c;
        int p=d;
        x=o;
        y=p;
        printf("(%d,%d)->",o,p);
        while(prev[o][p].x!=-1)
        {
            if(abs(prev[o][p].x-x)==1&&abs(prev[o][p].y-y)==1)
                printf("(%d,%d)->",o,p);
            x=o;
            y=p;
            o=prev[x][y].x;
            p=prev[x][y].y;

        }
        matrix[a][b] = 0;
        matrix[c][d] = 0;
        printf("(%d,%d)",o,p);
        return 1;
    }
}


string MainWindow2::getPicTypeName(int order)
{
    if(order == 0)return ":/new/prefix1/SunFlower1.png";
    else if(order == 1)return ":/new/prefix1/PeaShoot1.png";
    else if(order == 2)return ":/new/prefix1/WallNut1.png";
    else if(order == 3)return ":/new/prefix1/SnowPeaShoot1.png";
    else if(order == 4)return ":/new/prefix1/gourd1.png";
    else if(order == 5)return ":/new/prefix1/PotatoMine1.png";
    else if(order == 6)return ":/new/prefix1/MushRoom1.png";
    else if(order == 7)return ":/new/prefix1/Cactus1.png";
    else return "";
}

string MainWindow2::getPicTypeName2(int order)
{
    if(order == 0)return ":/new/prefix1/SunFlower2.png";
    else if(order == 1)return ":/new/prefix1/PeaShoot2.png";
    else if(order == 2)return ":/new/prefix1/WallNut2.png";
    else if(order == 3)return ":/new/prefix1/SnowPeaShoot2.png";
    else if(order == 4)return ":/new/prefix1/gourd2.png";
    else if(order == 5)return ":/new/prefix1/PotatoMine2.png";
    else if(order == 6)return ":/new/prefix1/MushRoom2.png";
    else if(order == 7)return ":/new/prefix1/Cactus2.png";
    else return "";
}

QIcon MainWindow2::getQicon(int picOrder2)
{
    QIcon qicon1(QString::fromStdString(getPicTypeName(picOrder2)));
    return qicon1;
}

QPushButton* MainWindow2::getPushButton(int x, int y)
{
    if(x == 0&&y == 0)return ui->pushButton_3;
    else if(x == 0&&y == 1)return ui->pushButton_16;
    else if(x == 0&&y == 2)return ui->pushButton_24;
    else if(x == 0&&y == 3)return ui->pushButton_32;
    else if(x == 0&&y == 4)return ui->pushButton_40;
    else if(x == 0&&y == 5)return ui->pushButton_48;
    else if(x == 0&&y == 6)return ui->pushButton_56;
    else if(x == 0&&y == 7)return ui->pushButton_64;
    else if(x == 0&&y == 8)return ui->pushButton_71;
    else if(x == 0&&y == 9)return ui->pushButton_79;
    else if(x == 1&&y == 0)return ui->pushButton_4;
    else if(x == 1&&y == 1)return ui->pushButton_15;
    else if(x == 1&&y == 2)return ui->pushButton_23;
    else if(x == 1&&y == 3)return ui->pushButton_31;
    else if(x == 1&&y == 4)return ui->pushButton_39;
    else if(x == 1&&y == 5)return ui->pushButton_47;
    else if(x == 1&&y == 6)return ui->pushButton_55;
    else if(x == 1&&y == 7)return ui->pushButton_63;
    else if(x == 1&&y == 8)return ui->pushButton_67;
    else if(x == 1&&y == 9)return ui->pushButton_75;
    else if(x == 2&&y == 0)return ui->pushButton_5;
    else if(x == 2&&y == 1)return ui->pushButton_12;
    else if(x == 2&&y == 2)return ui->pushButton_20;
    else if(x == 2&&y == 3)return ui->pushButton_28;
    else if(x == 2&&y == 4)return ui->pushButton_38;
    else if(x == 2&&y == 5)return ui->pushButton_44;
    else if(x == 2&&y == 6)return ui->pushButton_52;
    else if(x == 2&&y == 7)return ui->pushButton_60;
    else if(x == 2&&y == 8)return ui->pushButton_72;
    else if(x == 2&&y == 9)return ui->pushButton_80;
    else if(x == 3&&y == 0)return ui->pushButton_6;
    else if(x == 3&&y == 1)return ui->pushButton_13;
    else if(x == 3&&y == 2)return ui->pushButton_21;
    else if(x == 3&&y == 3)return ui->pushButton_29;
    else if(x == 3&&y == 4)return ui->pushButton_37;
    else if(x == 3&&y == 5)return ui->pushButton_45;
    else if(x == 3&&y == 6)return ui->pushButton_53;
    else if(x == 3&&y == 7)return ui->pushButton_61;
    else if(x == 3&&y == 8)return ui->pushButton_74;
    else if(x == 3&&y == 9)return ui->pushButton_82;
    else if(x == 4&&y == 0)return ui->pushButton_7;
    else if(x == 4&&y == 1)return ui->pushButton_17;
    else if(x == 4&&y == 2)return ui->pushButton_25;
    else if(x == 4&&y == 3)return ui->pushButton_33;
    else if(x == 4&&y == 4)return ui->pushButton_41;
    else if(x == 4&&y == 5)return ui->pushButton_49;
    else if(x == 4&&y == 6)return ui->pushButton_57;
    else if(x == 4&&y == 7)return ui->pushButton_65;
    else if(x == 4&&y == 8)return ui->pushButton_70;
    else if(x == 4&&y == 9)return ui->pushButton_78;
    else if(x == 5&&y == 0)return ui->pushButton_8;
    else if(x == 5&&y == 1)return ui->pushButton_14;
    else if(x == 5&&y == 2)return ui->pushButton_22;
    else if(x == 5&&y == 3)return ui->pushButton_30;
    else if(x == 5&&y == 4)return ui->pushButton_38;
    else if(x == 5&&y == 5)return ui->pushButton_46;
    else if(x == 5&&y == 6)return ui->pushButton_54;
    else if(x == 5&&y == 7)return ui->pushButton_62;
    else if(x == 5&&y == 8)return ui->pushButton_68;
    else if(x == 5&&y == 9)return ui->pushButton_76;
    else if(x == 6&&y == 0)return ui->pushButton_9;
    else if(x == 6&&y == 1)return ui->pushButton_18;
    else if(x == 6&&y == 2)return ui->pushButton_26;
    else if(x == 6&&y == 3)return ui->pushButton_34;
    else if(x == 6&&y == 4)return ui->pushButton_42;
    else if(x == 6&&y == 5)return ui->pushButton_50;
    else if(x == 6&&y == 6)return ui->pushButton_58;
    else if(x == 6&&y == 7)return ui->pushButton_66;
    else if(x == 6&&y == 8)return ui->pushButton_69;
    else if(x == 6&&y == 9)return ui->pushButton_77;
    else if(x == 7&&y == 0)return ui->pushButton_10;
    else if(x == 7&&y == 1)return ui->pushButton_11;
    else if(x == 7&&y == 2)return ui->pushButton_19;
    else if(x == 7&&y == 3)return ui->pushButton_27;
    else if(x == 7&&y == 4)return ui->pushButton_35;
    else if(x == 7&&y == 5)return ui->pushButton_43;
    else if(x == 7&&y == 6)return ui->pushButton_51;
    else if(x == 7&&y == 7)return ui->pushButton_59;
    else if(x == 7&&y == 8)return ui->pushButton_73;
    else if(x == 7&&y == 9)return ui->pushButton_81;
    return NULL;
}

void MainWindow2::hint()
{
    for(int i=0; i<num1; i++)
    {
        for(int j=0; j<num2; j++)
        {
            for(int m=i; m<num1; m++)
            {
                for(int n=0; n<num2; n++)
                {
                    if(matrix[i][j]!=0&&matrix[i][j]==matrix[m][n]&&(i!=m||j!=n)&&picOrder[i][j] == picOrder[m][n])
                    {//printf("(%d,%d)->(%d,%d)",i,j,m,n);
                        if(canConnect(i,j,m,n))
                        {
                            int o,p;
                            int x=m;
                            int y=n;
                            x1 = m;
                            y1 = n;
                            printf("(%d,%d)->",m,n);
                            while(prev[x][y].x!=i||prev[x][y].y!=j)
                            {

                                o=prev[x][y].x;
                                p=prev[x][y].y;
                                //输出所有拐点
                                if(abs(prev[o][p].x-x)==1&&abs(prev[o][p].y-y)==1)
                                    printf("(%d,%d)->",o,p);
                                x=o;
                                y=p;
                            }
                            x2 = i;
                            y2 = j;
                            printf("(%d,%d)",i,j);
                            return;
                        }
                    }
                }
            }
        }
    }
    printf("Can‘t find！");
}

void MainWindow2::getTips()
{
    hint();
    if(x1 == -1){
        cout<<"adasdasdasdasdasda"<<endl;
    }
    else{
        cout<<endl;
        cout<<x1<<" "<<y1<<endl;
        cout<<x2<<" "<<y2<<endl;
        QPushButton* tempqPushButton = getPushButton(x1, y1);
        QPushButton* tempqPushButton2 = getPushButton(x2, y2);
        tempqPushButton->setVisible(false);
        tempqPushButton2->setVisible(false);
        x1 = -1;
        y1 = -1;
        x2 = -1;
        y2 = -1;
    }
}

void MainWindow2::reSet()
{

    Block*** tempblock = create1->reset(tempBlock1);
    QPushButton* tempqPushbutton;
    for(int i = 0;i<8;i++){
        for(int j =0;j<10;j++){
            if(matrix[i][j] !=0){
                picOrder[i][j] = tempblock[i][j]->num-1;
                tempqPushbutton = getPushButton(i, j);
                QIcon qicon1(QString::fromStdString(getPicTypeName(picOrder[i][j])));
                tempqPushbutton->setIcon(qicon1);
                tempqPushbutton->setIconSize(QSize(53, 53));
                tempqPushbutton->setFlat(false);
            }
        }
    }
}





void MainWindow2::on_pushButton_3_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 0)
    {
        QIcon qicon1(QString::fromStdString(getPicTypeName(picOrder[0][0])));
        ui->pushButton_3->setIcon(qicon1);
        ui->pushButton_3->setIconSize(QSize(53, 53));
        ui->pushButton_3->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(QString::fromStdString(getPicTypeName2(picOrder[0][0])));
        ui->pushButton_3->setIcon(qicon1);
        ui->pushButton_3->setIconSize(QSize(53, 53));
        ui->pushButton_3->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 0;
            qPushButton1 = ui->pushButton_3;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][0])));
                    ui->pushButton_3->setIcon(qicon3);
                    ui->pushButton_3->setIconSize(QSize(53, 53));
                    ui->pushButton_3->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_3->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][0])));
                ui->pushButton_3->setIcon(qicon3);
                ui->pushButton_3->setIconSize(QSize(53, 53));
                ui->pushButton_3->setFlat(false);
            }
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_16_clicked()
{
    if(firstChoosex == 0&&firstChoosey == 1)
    {
        QIcon qicon1(QString::fromStdString(getPicTypeName(picOrder[0][1])));
        ui->pushButton_16->setIcon(qicon1);
        ui->pushButton_16->setIconSize(QSize(53, 53));
        ui->pushButton_16->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(QString::fromStdString(getPicTypeName2(picOrder[0][1])));
        ui->pushButton_16->setIcon(qicon1);
        ui->pushButton_16->setIconSize(QSize(53, 53));
        ui->pushButton_16->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 0;
            firstChoosey = 1;
            qPushButton1 = ui->pushButton_16;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][1])));
                    ui->pushButton_16->setIcon(qicon3);
                    ui->pushButton_16->setIconSize(QSize(53, 53));
                    ui->pushButton_16->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_16->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][1])));
                ui->pushButton_16->setIcon(qicon3);
                ui->pushButton_16->setIconSize(QSize(53, 53));
                ui->pushButton_16->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_24;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][2])));
                    ui->pushButton_24->setIcon(qicon3);
                    ui->pushButton_24->setIconSize(QSize(53, 53));
                    ui->pushButton_24->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_24->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][2])));
                ui->pushButton_24->setIcon(qicon3);
                ui->pushButton_24->setIconSize(QSize(53, 53));
                ui->pushButton_24->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_32;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][3])));
                    ui->pushButton_32->setIcon(qicon3);
                    ui->pushButton_32->setIconSize(QSize(53, 53));
                    ui->pushButton_32->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_32->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][3])));
                ui->pushButton_32->setIcon(qicon3);
                ui->pushButton_32->setIconSize(QSize(53, 53));
                ui->pushButton_32->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_40;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][4])));
                    ui->pushButton_40->setIcon(qicon3);
                    ui->pushButton_40->setIconSize(QSize(53, 53));
                    ui->pushButton_40->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_40->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][4])));
                ui->pushButton_40->setIcon(qicon3);
                ui->pushButton_40->setIconSize(QSize(53, 53));
                ui->pushButton_40->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_48;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][5])));
                    ui->pushButton_48->setIcon(qicon3);
                    ui->pushButton_48->setIconSize(QSize(53, 53));
                    ui->pushButton_48->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_48->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][5])));
                ui->pushButton_48->setIcon(qicon3);
                ui->pushButton_48->setIconSize(QSize(53, 53));
                ui->pushButton_48->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_56;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][6])));
                    ui->pushButton_56->setIcon(qicon3);
                    ui->pushButton_56->setIconSize(QSize(53, 53));
                    ui->pushButton_56->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_56->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][6])));
                ui->pushButton_56->setIcon(qicon3);
                ui->pushButton_56->setIconSize(QSize(53, 53));
                ui->pushButton_56->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_64;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][7])));
                    ui->pushButton_64->setIcon(qicon3);
                    ui->pushButton_64->setIconSize(QSize(53, 53));
                    ui->pushButton_64->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_64->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][7])));
                ui->pushButton_64->setIcon(qicon3);
                ui->pushButton_64->setIconSize(QSize(53, 53));
                ui->pushButton_64->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_71;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][8]){
                cout<<"asdasd"<<endl;
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 8);
                cout<<tempint2<<endl;
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][8])));
                    ui->pushButton_71->setIcon(qicon3);
                    ui->pushButton_71->setIconSize(QSize(53, 53));
                    ui->pushButton_71->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_71->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][8])));
                ui->pushButton_71->setIcon(qicon3);
                ui->pushButton_71->setIconSize(QSize(53, 53));
                ui->pushButton_71->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_79;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[0][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 0, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][9])));
                    ui->pushButton_79->setIcon(qicon3);
                    ui->pushButton_79->setIconSize(QSize(53, 53));
                    ui->pushButton_79->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_79->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[0][9])));
                ui->pushButton_79->setIcon(qicon3);
                ui->pushButton_79->setIconSize(QSize(53, 53));
                ui->pushButton_79->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_4;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][0])));
                    ui->pushButton_4->setIcon(qicon3);
                    ui->pushButton_4->setIconSize(QSize(53, 53));
                    ui->pushButton_4->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_4->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][0])));
                ui->pushButton_4->setIcon(qicon3);
                ui->pushButton_4->setIconSize(QSize(53, 53));
                ui->pushButton_4->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_15;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][1])));
                    ui->pushButton_15->setIcon(qicon3);
                    ui->pushButton_15->setIconSize(QSize(53, 53));
                    ui->pushButton_15->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_15->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][1])));
                ui->pushButton_15->setIcon(qicon3);
                ui->pushButton_15->setIconSize(QSize(53, 53));
                ui->pushButton_15->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_23;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][2])));
                    ui->pushButton_23->setIcon(qicon3);
                    ui->pushButton_23->setIconSize(QSize(53, 53));
                    ui->pushButton_23->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_23->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][2])));
                ui->pushButton_23->setIcon(qicon3);
                ui->pushButton_23->setIconSize(QSize(53, 53));
                ui->pushButton_23->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_31;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][3])));
                    ui->pushButton_31->setIcon(qicon3);
                    ui->pushButton_31->setIconSize(QSize(53, 53));
                    ui->pushButton_31->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_31->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][3])));
                ui->pushButton_31->setIcon(qicon3);
                ui->pushButton_31->setIconSize(QSize(53, 53));
                ui->pushButton_31->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_39;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][4]){
                cout<<"asdasda"<<endl;
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 4);
                cout<<"asdasd"<<endl;
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][4])));
                    ui->pushButton_39->setIcon(qicon3);
                    ui->pushButton_39->setIconSize(QSize(53, 53));
                    ui->pushButton_39->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_39->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][4])));
                ui->pushButton_39->setIcon(qicon3);
                ui->pushButton_39->setIconSize(QSize(53, 53));
                ui->pushButton_39->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_47;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][5])));
                    ui->pushButton_47->setIcon(qicon3);
                    ui->pushButton_47->setIconSize(QSize(53, 53));
                    ui->pushButton_47->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_47->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][5])));
                ui->pushButton_47->setIcon(qicon3);
                ui->pushButton_47->setIconSize(QSize(53, 53));
                ui->pushButton_47->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_55;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][6])));
                    ui->pushButton_55->setIcon(qicon3);
                    ui->pushButton_55->setIconSize(QSize(53, 53));
                    ui->pushButton_55->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_55->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][6])));
                ui->pushButton_55->setIcon(qicon3);
                ui->pushButton_55->setIconSize(QSize(53, 53));
                ui->pushButton_55->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_63;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][7]){
                cout<<"asdasda"<<endl;
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 7);
                cout<<tempint2<<endl;
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][7])));
                    ui->pushButton_63->setIcon(qicon3);
                    ui->pushButton_63->setIconSize(QSize(53, 53));
                    ui->pushButton_63->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_63->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][7])));
                ui->pushButton_63->setIcon(qicon3);
                ui->pushButton_63->setIconSize(QSize(53, 53));
                ui->pushButton_63->setFlat(false);
            }
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::on_pushButton_67_clicked()
{
    if(firstChoosex == 1&&firstChoosey == 8)
    {
        QIcon qicon1(QString::fromStdString(getPicTypeName(picOrder[1][8])));
        ui->pushButton_67->setIcon(qicon1);
        ui->pushButton_67->setIconSize(QSize(53, 53));
        ui->pushButton_67->setFlat(false);
        firstChoosex = -1;
        firstChoosey = -1;
    }
    else{
        QIcon qicon1(QString::fromStdString(getPicTypeName2(picOrder[1][8])));
        ui->pushButton_67->setIcon(qicon1);
        ui->pushButton_67->setIconSize(QSize(53, 53));
        ui->pushButton_67->setFlat(false);
        if(firstChoosex == -1){//还没选第一个
            firstChoosex = 1;
            firstChoosey = 8;
            qPushButton1 = ui->pushButton_67;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][8])));
                    ui->pushButton_67->setIcon(qicon3);
                    ui->pushButton_67->setIconSize(QSize(53, 53));
                    ui->pushButton_67->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_67->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][8])));
                ui->pushButton_67->setIcon(qicon3);
                ui->pushButton_67->setIconSize(QSize(53, 53));
                ui->pushButton_67->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_75;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[1][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 1, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][9])));
                    ui->pushButton_75->setIcon(qicon3);
                    ui->pushButton_75->setIconSize(QSize(53, 53));
                    ui->pushButton_75->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_75->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[1][9])));
                ui->pushButton_75->setIcon(qicon3);
                ui->pushButton_75->setIconSize(QSize(53, 53));
                ui->pushButton_75->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_5;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][0])));
                    ui->pushButton_5->setIcon(qicon3);
                    ui->pushButton_5->setIconSize(QSize(53, 53));
                    ui->pushButton_5->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_5->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][0])));
                ui->pushButton_5->setIcon(qicon3);
                ui->pushButton_5->setIconSize(QSize(53, 53));
                ui->pushButton_5->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_12;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][1])));
                    ui->pushButton_12->setIcon(qicon3);
                    ui->pushButton_12->setIconSize(QSize(53, 53));
                    ui->pushButton_12->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_12->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][1])));
                ui->pushButton_12->setIcon(qicon3);
                ui->pushButton_12->setIconSize(QSize(53, 53));
                ui->pushButton_12->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_20;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][2])));
                    ui->pushButton_20->setIcon(qicon3);
                    ui->pushButton_20->setIconSize(QSize(53, 53));
                    ui->pushButton_20->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_20->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][2])));
                ui->pushButton_20->setIcon(qicon3);
                ui->pushButton_20->setIconSize(QSize(53, 53));
                ui->pushButton_20->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_28;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][3])));
                    ui->pushButton_28->setIcon(qicon3);
                    ui->pushButton_28->setIconSize(QSize(53, 53));
                    ui->pushButton_28->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_28->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][3])));
                ui->pushButton_28->setIcon(qicon3);
                ui->pushButton_28->setIconSize(QSize(53, 53));
                ui->pushButton_28->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_36;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][4])));
                    ui->pushButton_36->setIcon(qicon3);
                    ui->pushButton_36->setIconSize(QSize(53, 53));
                    ui->pushButton_36->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_36->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][4])));
                ui->pushButton_36->setIcon(qicon3);
                ui->pushButton_36->setIconSize(QSize(53, 53));
                ui->pushButton_36->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_44;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][5])));
                    ui->pushButton_44->setIcon(qicon3);
                    ui->pushButton_44->setIconSize(QSize(53, 53));
                    ui->pushButton_44->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_44->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][5])));
                ui->pushButton_44->setIcon(qicon3);
                ui->pushButton_44->setIconSize(QSize(53, 53));
                ui->pushButton_44->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_52;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][6])));
                    ui->pushButton_52->setIcon(qicon3);
                    ui->pushButton_52->setIconSize(QSize(53, 53));
                    ui->pushButton_52->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_52->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][6])));
                ui->pushButton_52->setIcon(qicon3);
                ui->pushButton_52->setIconSize(QSize(53, 53));
                ui->pushButton_52->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_60;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][7])));
                    ui->pushButton_60->setIcon(qicon3);
                    ui->pushButton_60->setIconSize(QSize(53, 53));
                    ui->pushButton_60->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_60->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][7])));
                ui->pushButton_60->setIcon(qicon3);
                ui->pushButton_60->setIconSize(QSize(53, 53));
                ui->pushButton_60->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_72;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][8])));
                    ui->pushButton_72->setIcon(qicon3);
                    ui->pushButton_72->setIconSize(QSize(53, 53));
                    ui->pushButton_72->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_72->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][8])));
                ui->pushButton_72->setIcon(qicon3);
                ui->pushButton_72->setIconSize(QSize(53, 53));
                ui->pushButton_72->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_80;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[2][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 2, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][9])));
                    ui->pushButton_80->setIcon(qicon3);
                    ui->pushButton_80->setIconSize(QSize(53, 53));
                    ui->pushButton_80->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_80->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[2][9])));
                ui->pushButton_80->setIcon(qicon3);
                ui->pushButton_80->setIconSize(QSize(53, 53));
                ui->pushButton_80->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_6;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][0])));
                    ui->pushButton_6->setIcon(qicon3);
                    ui->pushButton_6->setIconSize(QSize(53, 53));
                    ui->pushButton_6->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_6->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][0])));
                ui->pushButton_6->setIcon(qicon3);
                ui->pushButton_6->setIconSize(QSize(53, 53));
                ui->pushButton_6->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_13;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][1])));
                    ui->pushButton_13->setIcon(qicon3);
                    ui->pushButton_13->setIconSize(QSize(53, 53));
                    ui->pushButton_13->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_13->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][1])));
                ui->pushButton_13->setIcon(qicon3);
                ui->pushButton_13->setIconSize(QSize(53, 53));
                ui->pushButton_13->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_21;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][2])));
                    ui->pushButton_21->setIcon(qicon3);
                    ui->pushButton_21->setIconSize(QSize(53, 53));
                    ui->pushButton_21->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_21->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][2])));
                ui->pushButton_21->setIcon(qicon3);
                ui->pushButton_21->setIconSize(QSize(53, 53));
                ui->pushButton_21->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_29;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][3])));
                    ui->pushButton_29->setIcon(qicon3);
                    ui->pushButton_29->setIconSize(QSize(53, 53));
                    ui->pushButton_29->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_29->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][3])));
                ui->pushButton_29->setIcon(qicon3);
                ui->pushButton_29->setIconSize(QSize(53, 53));
                ui->pushButton_29->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_37;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][4])));
                    ui->pushButton_37->setIcon(qicon3);
                    ui->pushButton_37->setIconSize(QSize(53, 53));
                    ui->pushButton_37->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_37->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][4])));
                ui->pushButton_37->setIcon(qicon3);
                ui->pushButton_37->setIconSize(QSize(53, 53));
                ui->pushButton_37->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_45;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][5])));
                    ui->pushButton_45->setIcon(qicon3);
                    ui->pushButton_45->setIconSize(QSize(53, 53));
                    ui->pushButton_45->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_45->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][5])));
                ui->pushButton_45->setIcon(qicon3);
                ui->pushButton_45->setIconSize(QSize(53, 53));
                ui->pushButton_45->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_53;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][6])));
                    ui->pushButton_53->setIcon(qicon3);
                    ui->pushButton_53->setIconSize(QSize(53, 53));
                    ui->pushButton_53->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_53->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][6])));
                ui->pushButton_53->setIcon(qicon3);
                ui->pushButton_53->setIconSize(QSize(53, 53));
                ui->pushButton_53->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_61;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][7])));
                    ui->pushButton_61->setIcon(qicon3);
                    ui->pushButton_61->setIconSize(QSize(53, 53));
                    ui->pushButton_61->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_61->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][7])));
                ui->pushButton_61->setIcon(qicon3);
                ui->pushButton_61->setIconSize(QSize(53, 53));
                ui->pushButton_61->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_74;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][8])));
                    ui->pushButton_74->setIcon(qicon3);
                    ui->pushButton_74->setIconSize(QSize(53, 53));
                    ui->pushButton_74->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_74->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][8])));
                ui->pushButton_74->setIcon(qicon3);
                ui->pushButton_74->setIconSize(QSize(53, 53));
                ui->pushButton_74->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_82;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[3][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 3, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][9])));
                    ui->pushButton_82->setIcon(qicon3);
                    ui->pushButton_82->setIconSize(QSize(53, 53));
                    ui->pushButton_82->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_82->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[3][9])));
                ui->pushButton_82->setIcon(qicon3);
                ui->pushButton_82->setIconSize(QSize(53, 53));
                ui->pushButton_82->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_7;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][0])));
                    ui->pushButton_7->setIcon(qicon3);
                    ui->pushButton_7->setIconSize(QSize(53, 53));
                    ui->pushButton_7->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_7->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][0])));
                ui->pushButton_7->setIcon(qicon3);
                ui->pushButton_7->setIconSize(QSize(53, 53));
                ui->pushButton_7->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_17;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][1])));
                    ui->pushButton_17->setIcon(qicon3);
                    ui->pushButton_17->setIconSize(QSize(53, 53));
                    ui->pushButton_17->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_17->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][1])));
                ui->pushButton_17->setIcon(qicon3);
                ui->pushButton_17->setIconSize(QSize(53, 53));
                ui->pushButton_17->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_25;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][2])));
                    ui->pushButton_25->setIcon(qicon3);
                    ui->pushButton_25->setIconSize(QSize(53, 53));
                    ui->pushButton_25->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_25->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][2])));
                ui->pushButton_25->setIcon(qicon3);
                ui->pushButton_25->setIconSize(QSize(53, 53));
                ui->pushButton_25->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_33;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][3])));
                    ui->pushButton_33->setIcon(qicon3);
                    ui->pushButton_33->setIconSize(QSize(53, 53));
                    ui->pushButton_33->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_33->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][3])));
                ui->pushButton_33->setIcon(qicon3);
                ui->pushButton_33->setIconSize(QSize(53, 53));
                ui->pushButton_33->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_41;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][4])));
                    ui->pushButton_41->setIcon(qicon3);
                    ui->pushButton_41->setIconSize(QSize(53, 53));
                    ui->pushButton_41->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_41->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][4])));
                ui->pushButton_41->setIcon(qicon3);
                ui->pushButton_41->setIconSize(QSize(53, 53));
                ui->pushButton_41->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_49;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][5])));
                    ui->pushButton_49->setIcon(qicon3);
                    ui->pushButton_49->setIconSize(QSize(53, 53));
                    ui->pushButton_49->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_49->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][5])));
                ui->pushButton_49->setIcon(qicon3);
                ui->pushButton_49->setIconSize(QSize(53, 53));
                ui->pushButton_49->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_57;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][6])));
                    ui->pushButton_57->setIcon(qicon3);
                    ui->pushButton_57->setIconSize(QSize(53, 53));
                    ui->pushButton_57->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_57->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][6])));
                ui->pushButton_57->setIcon(qicon3);
                ui->pushButton_57->setIconSize(QSize(53, 53));
                ui->pushButton_57->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_65;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][7])));
                    ui->pushButton_65->setIcon(qicon3);
                    ui->pushButton_65->setIconSize(QSize(53, 53));
                    ui->pushButton_65->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_65->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][7])));
                ui->pushButton_65->setIcon(qicon3);
                ui->pushButton_65->setIconSize(QSize(53, 53));
                ui->pushButton_65->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_70;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][8])));
                    ui->pushButton_70->setIcon(qicon3);
                    ui->pushButton_70->setIconSize(QSize(53, 53));
                    ui->pushButton_70->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_70->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][8])));
                ui->pushButton_70->setIcon(qicon3);
                ui->pushButton_70->setIconSize(QSize(53, 53));
                ui->pushButton_70->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_78;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[4][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 4, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][9])));
                    ui->pushButton_78->setIcon(qicon3);
                    ui->pushButton_78->setIconSize(QSize(53, 53));
                    ui->pushButton_78->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_78->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[4][9])));
                ui->pushButton_78->setIcon(qicon3);
                ui->pushButton_78->setIconSize(QSize(53, 53));
                ui->pushButton_78->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_8;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][0])));
                    ui->pushButton_8->setIcon(qicon3);
                    ui->pushButton_8->setIconSize(QSize(53, 53));
                    ui->pushButton_8->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_8->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][0])));
                ui->pushButton_8->setIcon(qicon3);
                ui->pushButton_8->setIconSize(QSize(53, 53));
                ui->pushButton_8->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_14;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][1])));
                    ui->pushButton_14->setIcon(qicon3);
                    ui->pushButton_14->setIconSize(QSize(53, 53));
                    ui->pushButton_14->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_14->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][1])));
                ui->pushButton_14->setIcon(qicon3);
                ui->pushButton_14->setIconSize(QSize(53, 53));
                ui->pushButton_14->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_22;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][2])));
                    ui->pushButton_22->setIcon(qicon3);
                    ui->pushButton_22->setIconSize(QSize(53, 53));
                    ui->pushButton_22->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_22->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][2])));
                ui->pushButton_22->setIcon(qicon3);
                ui->pushButton_22->setIconSize(QSize(53, 53));
                ui->pushButton_22->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_30;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][3])));
                    ui->pushButton_30->setIcon(qicon3);
                    ui->pushButton_30->setIconSize(QSize(53, 53));
                    ui->pushButton_30->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_30->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][3])));
                ui->pushButton_30->setIcon(qicon3);
                ui->pushButton_30->setIconSize(QSize(53, 53));
                ui->pushButton_30->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_38;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][4])));
                    ui->pushButton_38->setIcon(qicon3);
                    ui->pushButton_38->setIconSize(QSize(53, 53));
                    ui->pushButton_38->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_38->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][4])));
                ui->pushButton_38->setIcon(qicon3);
                ui->pushButton_38->setIconSize(QSize(53, 53));
                ui->pushButton_38->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_46;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][5])));
                    ui->pushButton_46->setIcon(qicon3);
                    ui->pushButton_46->setIconSize(QSize(53, 53));
                    ui->pushButton_46->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_46->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][5])));
                ui->pushButton_46->setIcon(qicon3);
                ui->pushButton_46->setIconSize(QSize(53, 53));
                ui->pushButton_46->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_54;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][6])));
                    ui->pushButton_54->setIcon(qicon3);
                    ui->pushButton_54->setIconSize(QSize(53, 53));
                    ui->pushButton_54->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_54->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][6])));
                ui->pushButton_54->setIcon(qicon3);
                ui->pushButton_54->setIconSize(QSize(53, 53));
                ui->pushButton_54->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_62;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][7])));
                    ui->pushButton_62->setIcon(qicon3);
                    ui->pushButton_62->setIconSize(QSize(53, 53));
                    ui->pushButton_62->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_62->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][7])));
                ui->pushButton_62->setIcon(qicon3);
                ui->pushButton_62->setIconSize(QSize(53, 53));
                ui->pushButton_62->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_68;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][8])));
                    ui->pushButton_68->setIcon(qicon3);
                    ui->pushButton_68->setIconSize(QSize(53, 53));
                    ui->pushButton_68->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_68->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][8])));
                ui->pushButton_68->setIcon(qicon3);
                ui->pushButton_68->setIconSize(QSize(53, 53));
                ui->pushButton_68->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_76;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[5][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 5, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][9])));
                    ui->pushButton_76->setIcon(qicon3);
                    ui->pushButton_76->setIconSize(QSize(53, 53));
                    ui->pushButton_76->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_76->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[5][9])));
                ui->pushButton_76->setIcon(qicon3);
                ui->pushButton_76->setIconSize(QSize(53, 53));
                ui->pushButton_76->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_9;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][0])));
                    ui->pushButton_9->setIcon(qicon3);
                    ui->pushButton_9->setIconSize(QSize(53, 53));
                    ui->pushButton_9->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_9->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][0])));
                ui->pushButton_9->setIcon(qicon3);
                ui->pushButton_9->setIconSize(QSize(53, 53));
                ui->pushButton_9->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_18;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][1])));
                    ui->pushButton_18->setIcon(qicon3);
                    ui->pushButton_18->setIconSize(QSize(53, 53));
                    ui->pushButton_18->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_18->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][1])));
                ui->pushButton_18->setIcon(qicon3);
                ui->pushButton_18->setIconSize(QSize(53, 53));
                ui->pushButton_18->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_26;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][2])));
                    ui->pushButton_26->setIcon(qicon3);
                    ui->pushButton_26->setIconSize(QSize(53, 53));
                    ui->pushButton_26->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_26->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][2])));
                ui->pushButton_26->setIcon(qicon3);
                ui->pushButton_26->setIconSize(QSize(53, 53));
                ui->pushButton_26->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_34;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][3])));
                    ui->pushButton_34->setIcon(qicon3);
                    ui->pushButton_34->setIconSize(QSize(53, 53));
                    ui->pushButton_34->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_34->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][3])));
                ui->pushButton_34->setIcon(qicon3);
                ui->pushButton_34->setIconSize(QSize(53, 53));
                ui->pushButton_34->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_42;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][4])));
                    ui->pushButton_42->setIcon(qicon3);
                    ui->pushButton_42->setIconSize(QSize(53, 53));
                    ui->pushButton_42->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_42->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][4])));
                ui->pushButton_42->setIcon(qicon3);
                ui->pushButton_42->setIconSize(QSize(53, 53));
                ui->pushButton_42->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_50;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][5])));
                    ui->pushButton_50->setIcon(qicon3);
                    ui->pushButton_50->setIconSize(QSize(53, 53));
                    ui->pushButton_50->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_50->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][5])));
                ui->pushButton_50->setIcon(qicon3);
                ui->pushButton_50->setIconSize(QSize(53, 53));
                ui->pushButton_50->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_58;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][6])));
                    ui->pushButton_58->setIcon(qicon3);
                    ui->pushButton_58->setIconSize(QSize(53, 53));
                    ui->pushButton_58->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_58->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][6])));
                ui->pushButton_58->setIcon(qicon3);
                ui->pushButton_58->setIconSize(QSize(53, 53));
                ui->pushButton_58->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_66;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][7])));
                    ui->pushButton_66->setIcon(qicon3);
                    ui->pushButton_66->setIconSize(QSize(53, 53));
                    ui->pushButton_66->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_66->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][7])));
                ui->pushButton_66->setIcon(qicon3);
                ui->pushButton_66->setIconSize(QSize(53, 53));
                ui->pushButton_66->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_69;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][8])));
                    ui->pushButton_69->setIcon(qicon3);
                    ui->pushButton_69->setIconSize(QSize(53, 53));
                    ui->pushButton_69->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_69->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][8])));
                ui->pushButton_69->setIcon(qicon3);
                ui->pushButton_69->setIconSize(QSize(53, 53));
                ui->pushButton_69->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_77;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[6][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 6, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][9])));
                    ui->pushButton_77->setIcon(qicon3);
                    ui->pushButton_77->setIconSize(QSize(53, 53));
                    ui->pushButton_77->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_77->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[6][9])));
                ui->pushButton_77->setIcon(qicon3);
                ui->pushButton_77->setIconSize(QSize(53, 53));
                ui->pushButton_77->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_10;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][0]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 0);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][0])));
                    ui->pushButton_10->setIcon(qicon3);
                    ui->pushButton_10->setIconSize(QSize(53, 53));
                    ui->pushButton_10->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_10->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][0])));
                ui->pushButton_10->setIcon(qicon3);
                ui->pushButton_10->setIconSize(QSize(53, 53));
                ui->pushButton_10->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_11;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][1]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 1);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][1])));
                    ui->pushButton_11->setIcon(qicon3);
                    ui->pushButton_11->setIconSize(QSize(53, 53));
                    ui->pushButton_11->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_11->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][1])));
                ui->pushButton_11->setIcon(qicon3);
                ui->pushButton_11->setIconSize(QSize(53, 53));
                ui->pushButton_11->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_19;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][2]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 2);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][2])));
                    ui->pushButton_19->setIcon(qicon3);
                    ui->pushButton_19->setIconSize(QSize(53, 53));
                    ui->pushButton_19->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_19->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][2])));
                ui->pushButton_19->setIcon(qicon3);
                ui->pushButton_19->setIconSize(QSize(53, 53));
                ui->pushButton_19->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_27;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][3]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 3);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][3])));
                    ui->pushButton_27->setIcon(qicon3);
                    ui->pushButton_27->setIconSize(QSize(53, 53));
                    ui->pushButton_27->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_27->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][3])));
                ui->pushButton_27->setIcon(qicon3);
                ui->pushButton_27->setIconSize(QSize(53, 53));
                ui->pushButton_27->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_35;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][4]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 4);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][4])));
                    ui->pushButton_35->setIcon(qicon3);
                    ui->pushButton_35->setIconSize(QSize(53, 53));
                    ui->pushButton_35->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_35->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][4])));
                ui->pushButton_35->setIcon(qicon3);
                ui->pushButton_35->setIconSize(QSize(53, 53));
                ui->pushButton_35->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_43;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][5]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 5);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][5])));
                    ui->pushButton_43->setIcon(qicon3);
                    ui->pushButton_43->setIconSize(QSize(53, 53));
                    ui->pushButton_43->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_43->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][5])));
                ui->pushButton_43->setIcon(qicon3);
                ui->pushButton_43->setIconSize(QSize(53, 53));
                ui->pushButton_43->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_51;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][6]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 6);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][6])));
                    ui->pushButton_51->setIcon(qicon3);
                    ui->pushButton_51->setIconSize(QSize(53, 53));
                    ui->pushButton_51->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_51->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][6])));
                ui->pushButton_51->setIcon(qicon3);
                ui->pushButton_51->setIconSize(QSize(53, 53));
                ui->pushButton_51->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_59;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][7]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 7);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][7])));
                    ui->pushButton_59->setIcon(qicon3);
                    ui->pushButton_59->setIconSize(QSize(53, 53));
                    ui->pushButton_59->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_59->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][7])));
                ui->pushButton_59->setIcon(qicon3);
                ui->pushButton_59->setIconSize(QSize(53, 53));
                ui->pushButton_59->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_73;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][8]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 8);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][8])));
                    ui->pushButton_73->setIcon(qicon3);
                    ui->pushButton_73->setIconSize(QSize(53, 53));
                    ui->pushButton_73->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_73->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][8])));
                ui->pushButton_73->setIcon(qicon3);
                ui->pushButton_73->setIconSize(QSize(53, 53));
                ui->pushButton_73->setFlat(false);
            }
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
            qPushButton1 = ui->pushButton_81;
        }
        else{
            if(picOrder[firstChoosex][firstChoosey] == picOrder[7][9]){
                int tempint2 = canConnect(firstChoosex, firstChoosey, 7, 9);
                if(tempint2 == 0){
                    string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                    QIcon qicon2(QString::fromStdString(tempstring1));
                    qPushButton1->setIcon(qicon2);
                    qPushButton1->setIconSize(QSize(53, 53));
                    QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][9])));
                    ui->pushButton_81->setIcon(qicon3);
                    ui->pushButton_81->setIconSize(QSize(53, 53));
                    ui->pushButton_81->setFlat(false);
                }
                else{
                    qPushButton1->setVisible(false);
                    ui->pushButton_81->setVisible(false);
                    ui->lcdNumber_2->display(++count2);
                }
            }
            else{
                string tempstring1 = getPicTypeName(picOrder[firstChoosex][firstChoosey]);
                QIcon qicon2(QString::fromStdString(tempstring1));
                qPushButton1->setIcon(qicon2);
                qPushButton1->setIconSize(QSize(53, 53));
                QIcon qicon3(QString::fromStdString(getPicTypeName(picOrder[7][9])));
                ui->pushButton_81->setIcon(qicon3);
                ui->pushButton_81->setIconSize(QSize(53, 53));
                ui->pushButton_81->setFlat(false);
            }
            firstChoosex = -1;
            firstChoosey = -1;
        }
    }
}

void MainWindow2::getTimeNum()
{
    count1--;
    if(count2 >= 40){
        qtimer1.stop();
        if(QMessageBox::information(this ,"消息" ,"游戏胜利！") == QMessageBox::Ok){
            cout<<"asdasdasd"<<endl;
            this->hide();
            emit gotoFirstWindow1();
        }
    }
    if(count1 == 0){
        qtimer1.stop();
        if(QMessageBox::information(this ,"消息" ,"游戏失败！") == QMessageBox::Ok){
            cout<<"asdasdasd"<<endl;
            this->hide();
            emit gotoFirstWindow1();
        }
    }
    ui->lcdNumber->display(count1);
}

void MainWindow2::on_pushButton_83_clicked()
{
    reSet();
}

void MainWindow2::on_pushButton_clicked()
{
    cout<<"asdasd"<<endl;
    getTips();
    ui->lcdNumber_2->display(++count2);
    cout<<"asdasasdasdas"<<endl;
}

void MainWindow2::on_pushButton_84_clicked()
{
    if(QMessageBox::information(this ,"分析" ," ") == QMessageBox::Ok){
        cout<<"asdasdasd"<<endl;
        this->hide();
        emit gotoFirstWindow1();
    }
}

void MainWindow2::on_pushButton_2_clicked()
{

}
