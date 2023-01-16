/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *back_space;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QLabel *result_show;
    QPushButton *brackets1;
    QPushButton *power;
    QPushButton *brackets2;
    QPushButton *acos;
    QPushButton *asin;
    QPushButton *sin;
    QPushButton *tan;
    QPushButton *atan;
    QPushButton *sqrt;
    QPushButton *ln;
    QPushButton *log;
    QPushButton *cos;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *outputGraph;
    QPushButton *value_x;
    QDoubleSpinBox *xMin;
    QDoubleSpinBox *yMax;
    QDoubleSpinBox *xMax;
    QDoubleSpinBox *yMin;
    QDoubleSpinBox *xSpinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *drawing_field;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1001, 370);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"font: bold;\n"
"border-bottom: 1px solid gray;\n"
"text-align:center;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        back_space = new QPushButton(centralwidget);
        back_space->setObjectName(QString::fromUtf8("back_space"));
        back_space->setGeometry(QRect(180, 70, 61, 61));
        back_space->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName(QString::fromUtf8("pushButton_plus_minus"));
        pushButton_plus_minus->setGeometry(QRect(240, 70, 61, 61));
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(300, 70, 61, 61));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(360, 70, 61, 61));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 190, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(360, 190, 61, 61));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 190, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 190, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 250, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(360, 250, 61, 61));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(180, 250, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 250, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(360, 130, 61, 61));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(240, 130, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(300, 130, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(180, 130, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        result_show = new QLabel(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(0, 0, 401, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        result_show->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        brackets1 = new QPushButton(centralwidget);
        brackets1->setObjectName(QString::fromUtf8("brackets1"));
        brackets1->setGeometry(QRect(120, 250, 61, 61));
        brackets1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        power->setGeometry(QRect(0, 70, 61, 61));
        power->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        brackets2 = new QPushButton(centralwidget);
        brackets2->setObjectName(QString::fromUtf8("brackets2"));
        brackets2->setGeometry(QRect(120, 190, 61, 61));
        brackets2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setGeometry(QRect(60, 130, 61, 61));
        acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setGeometry(QRect(60, 190, 61, 61));
        asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(0, 190, 61, 61));
        sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(0, 250, 61, 61));
        tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setGeometry(QRect(60, 250, 61, 61));
        atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setGeometry(QRect(60, 70, 61, 61));
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(120, 130, 61, 61));
        ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(120, 70, 61, 61));
        log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(0, 130, 61, 61));
        cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(360, 310, 61, 61));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(300, 310, 61, 61));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(180, 310, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        outputGraph = new QPushButton(centralwidget);
        outputGraph->setObjectName(QString::fromUtf8("outputGraph"));
        outputGraph->setGeometry(QRect(120, 310, 61, 61));
        outputGraph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        value_x = new QPushButton(centralwidget);
        value_x->setObjectName(QString::fromUtf8("value_x"));
        value_x->setGeometry(QRect(0, 310, 61, 61));
        value_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"								   stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        xMin = new QDoubleSpinBox(centralwidget);
        xMin->setObjectName(QString::fromUtf8("xMin"));
        xMin->setGeometry(QRect(480, 330, 61, 22));
        xMin->setMinimum(-1000000.000000000000000);
        xMin->setMaximum(1000000.000000000000000);
        yMax = new QDoubleSpinBox(centralwidget);
        yMax->setObjectName(QString::fromUtf8("yMax"));
        yMax->setGeometry(QRect(910, 330, 71, 21));
        yMax->setMinimum(-1000000.000000000000000);
        xMax = new QDoubleSpinBox(centralwidget);
        xMax->setObjectName(QString::fromUtf8("xMax"));
        xMax->setGeometry(QRect(620, 330, 62, 22));
        xMax->setMinimum(-1000000.000000000000000);
        yMin = new QDoubleSpinBox(centralwidget);
        yMin->setObjectName(QString::fromUtf8("yMin"));
        yMin->setEnabled(true);
        yMin->setGeometry(QRect(760, 330, 71, 20));
        yMin->setMinimum(-1000000.000000000000000);
        xSpinBox = new QDoubleSpinBox(centralwidget);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setGeometry(QRect(60, 310, 61, 61));
        xSpinBox->setMinimum(-1000000.000000000000000);
        xSpinBox->setMaximum(1000000.000000000000000);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 330, 58, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(580, 330, 58, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(720, 330, 58, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(870, 330, 58, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        drawing_field = new QLabel(centralwidget);
        drawing_field->setObjectName(QString::fromUtf8("drawing_field"));
        drawing_field->setGeometry(QRect(440, 70, 541, 241));
        drawing_field->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        back_space->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        brackets1->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        power->setText(QCoreApplication::translate("MainWindow", "x\312\270 ", nullptr));
        brackets2->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos(x)", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin(x)", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin(x)", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan(x)", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan(x)", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt(x)", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "ln(x)", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "log(x)", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos(x)", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        outputGraph->setText(QCoreApplication::translate("MainWindow", "graf", nullptr));
        value_x->setText(QCoreApplication::translate("MainWindow", "(x)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "xMin", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "xMax", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "yMin", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "yMax", nullptr));
        drawing_field->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
