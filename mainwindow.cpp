//
// Created by Ethan Edwards
//

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->newnote->setFlat(true);
    ui->exit_button->setFlat(true);
    this->setFixedSize(QSize(280, 600));
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::MSWindowsFixedSizeDialogHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    oldPos = event->globalPos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    const QPoint delta = event->globalPos() - oldPos;
    move(x() + delta.x(), y() + delta.y());
    oldPos = event->globalPos();
}

void MainWindow::on_newnote_clicked()
{
    // TODO: Open a new note window
}

void MainWindow::on_exit_button_clicked()
{
    // Close the application
    QApplication::quit();
    // TODO: Close all open windows
}