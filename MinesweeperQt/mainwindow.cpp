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

void setupBoard() {
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


}

void MainWindow::on_actionQuit_triggered()
{
    qApp->exit();
}

void MainWindow::on_actionNew_game_triggered()
{
    setupBoard();
}

void MainWindow::on_pushButton_clicked()
{

}
