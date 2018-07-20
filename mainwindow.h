#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<string.h>
#include <QMainWindow>
#include <QWidget>
#include <string>

class QLCDNumber;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_decimalPoint_clicked();

    void on_pushButton_plusMinus_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_clearEquation_clicked();

    void on_pushButton_squareRoot_clicked();

    void on_pushButton_Divide_clicked();

    void on_pushButton_Multiply_clicked();

    void on_pushButton_Subtract_clicked();

    void on_pushButton_Add_clicked();

    void on_pushButton_Equals_clicked();

    void on_actionConvert_to_binary_triggered();

    void on_actionConvert_result_to_octal_base_8_triggered();

    void on_actionConvert_to_hex_triggered();

    void on_actionConvert_to_custom_base_triggered();

private:
    Ui::MainWindow *ui;
    QString qstring="";
};

#endif // MAINWINDOW_H

/*
class Data {
protected:
    int deg; // degree integer variable
    char degChar; // degree character variable

    bool hasChar; // to check for variables
    double charVtoD(vector<char>ch); // convert from a vector of a char to a double

    // read a number from a vector and return its digit's count int digit by reference
    double getNum(vector<char> &form, int &orderm, int &digit);
    unsigned getDigits(long num); // return the digit snumber of a long num

    // convert a double to a vector
    vector<char> dtoVchar(double num);
};

class checker : public Data {
private:
    inline bool isOp(char &ch);
    bool isVar(vector<char>vars,char &ch);

    //check trigonometric functions
    bool _check (vector<char> &ch, vector<char>vars);  //checker function
protected:
    bool isTriangle (vector<char> &ch , int &temp);
    bool editSigns (vector<char> &ch);
    bool check(vector<char>form, char mainVar );  //check with formulas
    bool check(vector<char>form, vector<char>vars); };//check with formulas and variables
};

class fixer : public checker {
protected:
    void fix(vector<char> &ch);

private:
    int deg;
    void _fix(vector<char> &ch);
};

class Calculator : public fixer {
private:
    int str, end,
    digit,digit1,digit2,
    deg,deg1;

    vector<char> charNum;
    double num, num1, num2;
    bool final;

    double getCalcNum(vector<char> &form, int &order, int &count);
    void getBorder (vector<char> &form);
    void firstRank (vector<char> &form); //trigonometric and power
    void secondRank (vector<char> &form); //do multiplying and division
    void thirdRank (vector<char> &form); //summing and subtracting
    vector<char> _calc (vector<char> formula);
    vector<char> strToVector (string form);
    vector<char> charToVector(char form [] );

public:
    Calculator () :final(false){}
    double calc (vector<char> formula);
    double calc(char formula []);
    double calc(string formula );
    double calc (vector<char> formula, char var, double varValue);
    double calc (char formula [], char var, double varValue);
    double calc (string formula , char var, double varValue);
};
*/
