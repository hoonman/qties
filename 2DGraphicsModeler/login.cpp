#include "login.h"
#include "./ui_login.h"

login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("Sign in");
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

        if(username == "Admin" && password == "Password" || username == "User" && password == "Password")
        {

            QMessageBox::information(this, "Login", "Welcome Back!");
            close();
            mainwindow = new MainWindow();

            userIsAdmin = false;

            if(username == "Admin" && password == "Password")
            {
                userIsAdmin = true;
            }
            mainwindow->setAdmin(userIsAdmin);
            mainwindow->updateStuff(userIsAdmin);

            mainwindow->show();

        }
        else
        {
            QMessageBox::warning(this,"Login","Username or Password is incorrect");
        }
}


void login::on_ExitLogin_clicked()
{
    close();
}

