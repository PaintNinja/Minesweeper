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

   for (int x = 0; x < 10; x++) {
       for (int y = 0; y < 10; y++) {
           theBoard[x][y] = rand() % 2;
           cout << theBoard[x][y];
       }
       cout << endl;
   }

   ui->pushButton->setText(QString::number(theBoard[0][0]));
   ui->pushButton_2->setText(QString::number(theBoard[0][1]));
   ui->pushButton_3->setText(QString::number(theBoard[0][2]));
   ui->pushButton_4->setText(QString::number(theBoard[0][3]));
   ui->pushButton_5->setText(QString::number(theBoard[0][4]));
   ui->pushButton_6->setText(QString::number(theBoard[0][5]));
   ui->pushButton_7->setText(QString::number(theBoard[0][6]));
   ui->pushButton_8->setText(QString::number(theBoard[0][7]));
   ui->pushButton_9->setText(QString::number(theBoard[0][8]));
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
}

void MainWindow::on_pushButton_clicked()
{

}
