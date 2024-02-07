// Created by Ethan Edwards on 1/15/2024.

#include <iostream>

#include <QApplication>
#include <QStyleFactory>

#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[]){
    // Set up QT
    QApplication a(argc, argv);

    // Set the application style to a specific theme (e.g., "Fusion")
    QApplication::setStyle(QStyleFactory::create("Fusion"));

    // Create a palette and set its color roles
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    // Kill me please

    MainWindow w;
    w.show();
    return a.exec();
}
