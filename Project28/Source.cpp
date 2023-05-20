#test13_5.pro
#-------------------------------------------------
#
# Project created by QtCreator 2023 - 03 - 10T08:42 : 20
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets

TARGET = test13_5
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated(the exact warnings
    # depend on your compiler).Please consult the documentation of the
    # deprecated API in order to know how to port your code away from it.
    DEFINES += QT_DEPRECATED_WARNINGS

    # You can also make your code fail to compile if you use deprecated APIs.
    # In order to do so, uncomment the following line.
    # You can also select to disable deprecated APIs only up to a certain version of Qt.
    #DEFINES += QT_DISABLE_DEPRECATED_BEFORE = 0x060000    # disables all the APIs deprecated before Qt 6.0.0

    CONFIG += c++11

    SOURCES += \
    main.cpp \
    mainwindow.cpp

    HEADERS += \
    mainwindow.h

    FORMS += \
    mainwindow.ui

    # Default rules for deployment.
    qnx: target.path = / tmp / $${ TARGET } / bin
    else: unix:!android : target.path = / opt / $${ TARGET } / bin
    !isEmpty(target.path) : INSTALLS += target

    #main.cpp
#include "mainwindow.h"
#include <QApplication>

    int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

#mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H


#mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget * parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

#ui_mainwindow.h
/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QMenuBar* menuBar;
    QToolBar* mainToolBar;
    QWidget* centralWidget;
    QStatusBar* statusBar;

    void setupUi(QMainWindow* MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow* MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#mainwindow.ui

< ? xml version = "1.0" encoding = "UTF-8" ? >
<ui version = "4.0">
<class>MainWindow< / class>
<widget class = "QMainWindow" name = "MainWindow">
<property name = "geometry">
<rect>
< x>0 < / x >
< y>0 < / y >
< width>400 < / width >
< height>300 < / height >
< / rect>
< / property>
<property name = "windowTitle">
<string>MainWindow< / string>
< / property>
<widget class = "QWidget" name = "centralWidget">
<widget class = "QLabel" name = "label">
<property name = "geometry">
<rect>
< x>160 < / x >
< y>40 < / y >
< width>55 < / width >
< height>16 < / height >
< / rect>
< / property>
<property name = "text">
<string>TextLabel< / string>
< / property>
< / widget>
<widget class = "QSlider" name = "horizontalSlider">
<property name = "geometry">
<rect>
< x>110 < / x >
< y>90 < / y >
< width>160 < / width >
< height>22 < / height >
< / rect>
< / property>
<property name = "maximum">
< number>31 < / number >
< / property>
<property name = "orientation">
<enum>Qt::Horizontal< / enum>
< / property>
< / widget>
< / widget>
< / widget>
<layoutdefault spacing = "6" margin = "11" / >
<resources / >
<connections / >
< / ui>

#mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H
