#include "mainwindow.h"
#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    w.hide();

    login *Login;
    Login = new login();
    Login->show();

    return a.exec();
}
