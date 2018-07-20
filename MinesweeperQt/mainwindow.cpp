#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <stdio.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    qApp->exit();
}

void MainWindow::on_actionNew_game_triggered()
{
    // https://www.tutorialspoint.com/cplusplus/cpp_multi_dimensional_arrays.htm
   // https://stackoverflow.com/questions/39009172/initializing-a-2d-array-with-random-numbers

   int theBoard[10][10] = { {0},{0} };
   vector<int> theBoardVector;

   for (int x = 0; x < 10; x++) {
       for (int y = 0; y < 10; y++) {
           theBoard[x][y] = rand() % 2;
           cout << theBoard[x][y];
           theBoardVector.push_back(theBoard[x][y]);
       }
       cout << endl;
   }
   cout << endl;

   ui->pushButton_01->setText(QString::number(theBoard[0][0]));
   ui->pushButton_02->setText(QString::number(theBoard[0][1]));
   ui->pushButton_03->setText(QString::number(theBoard[0][2]));
   ui->pushButton_04->setText(QString::number(theBoard[0][3]));
   ui->pushButton_05->setText(QString::number(theBoard[0][4]));
   ui->pushButton_06->setText(QString::number(theBoard[0][5]));
   ui->pushButton_07->setText(QString::number(theBoard[0][6]));
   ui->pushButton_08->setText(QString::number(theBoard[0][7]));
   ui->pushButton_09->setText(QString::number(theBoard[0][8]));
   ui->pushButton_10->setText(QString::number(theBoard[0][9]));

   ui->pushButton_11->setText(QString::number(theBoard[1][0]));
   ui->pushButton_12->setText(QString::number(theBoard[1][1]));
   ui->pushButton_13->setText(QString::number(theBoard[1][2]));
   ui->pushButton_14->setText(QString::number(theBoard[1][3]));
   ui->pushButton_15->setText(QString::number(theBoard[1][4]));
   ui->pushButton_16->setText(QString::number(theBoard[1][5]));
   ui->pushButton_17->setText(QString::number(theBoard[1][6]));
   ui->pushButton_18->setText(QString::number(theBoard[1][7]));
   ui->pushButton_19->setText(QString::number(theBoard[1][8]));
   ui->pushButton_20->setText(QString::number(theBoard[1][9]));

   ui->pushButton_21->setText(QString::number(theBoard[2][0]));
   ui->pushButton_22->setText(QString::number(theBoard[2][1]));
   ui->pushButton_23->setText(QString::number(theBoard[2][2]));
   ui->pushButton_24->setText(QString::number(theBoard[2][3]));
   ui->pushButton_25->setText(QString::number(theBoard[2][4]));
   ui->pushButton_26->setText(QString::number(theBoard[2][5]));
   ui->pushButton_27->setText(QString::number(theBoard[2][6]));
   ui->pushButton_28->setText(QString::number(theBoard[2][7]));
   ui->pushButton_29->setText(QString::number(theBoard[2][8]));
   ui->pushButton_30->setText(QString::number(theBoard[2][9]));

   ui->pushButton_31->setText(QString::number(theBoard[3][0]));
   ui->pushButton_32->setText(QString::number(theBoard[3][1]));
   ui->pushButton_33->setText(QString::number(theBoard[3][2]));
   ui->pushButton_34->setText(QString::number(theBoard[3][3]));
   ui->pushButton_35->setText(QString::number(theBoard[3][4]));
   ui->pushButton_36->setText(QString::number(theBoard[3][5]));
   ui->pushButton_37->setText(QString::number(theBoard[3][6]));
   ui->pushButton_38->setText(QString::number(theBoard[3][7]));
   ui->pushButton_39->setText(QString::number(theBoard[3][8]));
   ui->pushButton_40->setText(QString::number(theBoard[3][9]));

   ui->pushButton_41->setText(QString::number(theBoard[4][0]));
   ui->pushButton_42->setText(QString::number(theBoard[4][1]));
   ui->pushButton_43->setText(QString::number(theBoard[4][2]));
   ui->pushButton_44->setText(QString::number(theBoard[4][3]));
   ui->pushButton_45->setText(QString::number(theBoard[4][4]));
   ui->pushButton_46->setText(QString::number(theBoard[4][5]));
   ui->pushButton_47->setText(QString::number(theBoard[4][6]));
   ui->pushButton_48->setText(QString::number(theBoard[4][7]));
   ui->pushButton_49->setText(QString::number(theBoard[4][8]));
   ui->pushButton_50->setText(QString::number(theBoard[4][9]));

   ui->pushButton_51->setText(QString::number(theBoard[5][0]));
   ui->pushButton_52->setText(QString::number(theBoard[5][1]));
   ui->pushButton_53->setText(QString::number(theBoard[5][2]));
   ui->pushButton_54->setText(QString::number(theBoard[5][3]));
   ui->pushButton_55->setText(QString::number(theBoard[5][4]));
   ui->pushButton_56->setText(QString::number(theBoard[5][5]));
   ui->pushButton_57->setText(QString::number(theBoard[5][6]));
   ui->pushButton_58->setText(QString::number(theBoard[5][7]));
   ui->pushButton_59->setText(QString::number(theBoard[5][8]));
   ui->pushButton_60->setText(QString::number(theBoard[5][9]));

   ui->pushButton_61->setText(QString::number(theBoard[6][0]));
   ui->pushButton_62->setText(QString::number(theBoard[6][1]));
   ui->pushButton_63->setText(QString::number(theBoard[6][2]));
   ui->pushButton_64->setText(QString::number(theBoard[6][3]));
   ui->pushButton_65->setText(QString::number(theBoard[6][4]));
   ui->pushButton_66->setText(QString::number(theBoard[6][5]));
   ui->pushButton_67->setText(QString::number(theBoard[6][6]));
   ui->pushButton_68->setText(QString::number(theBoard[6][7]));
   ui->pushButton_69->setText(QString::number(theBoard[6][8]));
   ui->pushButton_70->setText(QString::number(theBoard[6][9]));

   ui->pushButton_71->setText(QString::number(theBoard[7][0]));
   ui->pushButton_72->setText(QString::number(theBoard[7][1]));
   ui->pushButton_73->setText(QString::number(theBoard[7][2]));
   ui->pushButton_74->setText(QString::number(theBoard[7][3]));
   ui->pushButton_75->setText(QString::number(theBoard[7][4]));
   ui->pushButton_76->setText(QString::number(theBoard[7][5]));
   ui->pushButton_77->setText(QString::number(theBoard[7][6]));
   ui->pushButton_78->setText(QString::number(theBoard[7][7]));
   ui->pushButton_79->setText(QString::number(theBoard[7][8]));
   ui->pushButton_80->setText(QString::number(theBoard[7][9]));

   ui->pushButton_81->setText(QString::number(theBoard[8][0]));
   ui->pushButton_82->setText(QString::number(theBoard[8][1]));
   ui->pushButton_83->setText(QString::number(theBoard[8][2]));
   ui->pushButton_84->setText(QString::number(theBoard[8][3]));
   ui->pushButton_85->setText(QString::number(theBoard[8][4]));
   ui->pushButton_86->setText(QString::number(theBoard[8][5]));
   ui->pushButton_87->setText(QString::number(theBoard[8][6]));
   ui->pushButton_88->setText(QString::number(theBoard[8][7]));
   ui->pushButton_89->setText(QString::number(theBoard[8][8]));
   ui->pushButton_90->setText(QString::number(theBoard[8][9]));

   ui->pushButton_91->setText(QString::number(theBoard[9][0]));
   ui->pushButton_92->setText(QString::number(theBoard[9][1]));
   ui->pushButton_93->setText(QString::number(theBoard[9][2]));
   ui->pushButton_94->setText(QString::number(theBoard[9][3]));
   ui->pushButton_95->setText(QString::number(theBoard[9][4]));
   ui->pushButton_96->setText(QString::number(theBoard[9][5]));
   ui->pushButton_97->setText(QString::number(theBoard[9][6]));
   ui->pushButton_98->setText(QString::number(theBoard[9][7]));
   ui->pushButton_99->setText(QString::number(theBoard[9][8]));
   ui->pushButton_100->setText(QString::number(theBoard[9][9]));


}

void MainWindow::on_pushButton_01_clicked()
{
    /*if (theBoardVector.at(0) == 1) {
        cout << "You hit a mine" << endl;
    }*/
}
