/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConvert_to_binary;
    QAction *actionConvert_to_hex;
    QAction *actionConvert_result_to_octal_base_8;
    QAction *actionConvert_to_custom_base;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *lcdResult;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_clearEquation;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_squareRoot;
    QPushButton *pushButton_Divide;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Multiply;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Subtract;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton;
    QPushButton *pushButton_decimalPoint;
    QPushButton *pushButton_Equals;
    QMenuBar *menuBar;
    QMenu *menutest;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(365, 397);
        actionConvert_to_binary = new QAction(MainWindow);
        actionConvert_to_binary->setObjectName(QStringLiteral("actionConvert_to_binary"));
        actionConvert_to_hex = new QAction(MainWindow);
        actionConvert_to_hex->setObjectName(QStringLiteral("actionConvert_to_hex"));
        actionConvert_result_to_octal_base_8 = new QAction(MainWindow);
        actionConvert_result_to_octal_base_8->setObjectName(QStringLiteral("actionConvert_result_to_octal_base_8"));
        actionConvert_to_custom_base = new QAction(MainWindow);
        actionConvert_to_custom_base->setObjectName(QStringLiteral("actionConvert_to_custom_base"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 341, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        lcdResult = new QLabel(centralWidget);
        lcdResult->setObjectName(QStringLiteral("lcdResult"));
        lcdResult->setGeometry(QRect(10, 10, 341, 61));
        lcdResult->setFont(font);
        lcdResult->setLayoutDirection(Qt::RightToLeft);
        lcdResult->setFrameShape(QFrame::Box);
        lcdResult->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(13, 133, 340, 211));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_clearEquation = new QPushButton(widget);
        pushButton_clearEquation->setObjectName(QStringLiteral("pushButton_clearEquation"));
        QFont font1;
        font1.setPointSize(18);
        pushButton_clearEquation->setFont(font1);

        gridLayout->addWidget(pushButton_clearEquation, 0, 0, 1, 1);

        pushButton_Delete = new QPushButton(widget);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setFont(font1);

        gridLayout->addWidget(pushButton_Delete, 0, 1, 1, 1);

        pushButton_squareRoot = new QPushButton(widget);
        pushButton_squareRoot->setObjectName(QStringLiteral("pushButton_squareRoot"));
        pushButton_squareRoot->setFont(font1);

        gridLayout->addWidget(pushButton_squareRoot, 0, 2, 1, 1);

        pushButton_Divide = new QPushButton(widget);
        pushButton_Divide->setObjectName(QStringLiteral("pushButton_Divide"));
        pushButton_Divide->setFont(font1);

        gridLayout->addWidget(pushButton_Divide, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font1);

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font1);

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font1);

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_Multiply = new QPushButton(widget);
        pushButton_Multiply->setObjectName(QStringLiteral("pushButton_Multiply"));
        pushButton_Multiply->setFont(font1);

        gridLayout->addWidget(pushButton_Multiply, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font1);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font1);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_Subtract = new QPushButton(widget);
        pushButton_Subtract->setObjectName(QStringLiteral("pushButton_Subtract"));
        pushButton_Subtract->setFont(font1);

        gridLayout->addWidget(pushButton_Subtract, 2, 3, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setFont(font1);

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_Add = new QPushButton(widget);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));
        pushButton_Add->setFont(font1);

        gridLayout->addWidget(pushButton_Add, 3, 3, 1, 1);

        pushButton_plusMinus = new QPushButton(widget);
        pushButton_plusMinus->setObjectName(QStringLiteral("pushButton_plusMinus"));
        pushButton_plusMinus->setFont(font1);

        gridLayout->addWidget(pushButton_plusMinus, 4, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        pushButton_decimalPoint = new QPushButton(widget);
        pushButton_decimalPoint->setObjectName(QStringLiteral("pushButton_decimalPoint"));
        pushButton_decimalPoint->setFont(font1);

        gridLayout->addWidget(pushButton_decimalPoint, 4, 2, 1, 1);

        pushButton_Equals = new QPushButton(widget);
        pushButton_Equals->setObjectName(QStringLiteral("pushButton_Equals"));
        pushButton_Equals->setFont(font1);

        gridLayout->addWidget(pushButton_Equals, 4, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 365, 20));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QStringLiteral("menutest"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menutest->menuAction());
        menutest->addAction(actionConvert_to_binary);
        menutest->addAction(actionConvert_result_to_octal_base_8);
        menutest->addAction(actionConvert_to_hex);
        menutest->addAction(actionConvert_to_custom_base);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConvert_to_binary->setText(QApplication::translate("MainWindow", "Convert result to binary (base 2)", nullptr));
        actionConvert_to_hex->setText(QApplication::translate("MainWindow", "Convert result to hexadecimal (base 16)", nullptr));
        actionConvert_result_to_octal_base_8->setText(QApplication::translate("MainWindow", "Convert result to octal (base 8)", nullptr));
        actionConvert_to_custom_base->setText(QApplication::translate("MainWindow", "Convert to custom base...", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        lcdResult->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_clearEquation->setText(QApplication::translate("MainWindow", "CE", nullptr));
        pushButton_Delete->setText(QApplication::translate("MainWindow", "Del", nullptr));
        pushButton_squareRoot->setText(QApplication::translate("MainWindow", "Sqrt", nullptr));
        pushButton_Divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_Multiply->setText(QApplication::translate("MainWindow", "X", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_Subtract->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_Add->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_plusMinus->setText(QApplication::translate("MainWindow", "\302\261", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_decimalPoint->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_Equals->setText(QApplication::translate("MainWindow", "=", nullptr));
        menutest->setTitle(QApplication::translate("MainWindow", "Convert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
