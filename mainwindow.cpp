#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "about.h"
#include "ui_about.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
