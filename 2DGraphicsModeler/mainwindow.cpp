// ========================================================================
// mainwindow.cpp
// ========================================================================

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    if(username == "Admin" && password == "Password" || username == "User" && password == "Password")
    {


        QMessageBox::information(this, "Login", "Welcome Back!");
        hide();
        mainApplication = new MainApplication(this);

        if(username == "Admin" && password == "Password")
        {
            userIsAdmin = true;
            mainApplication->setAdmin(true);
        }

        mainApplication->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","Username or Password is incorrect");
    }
}

