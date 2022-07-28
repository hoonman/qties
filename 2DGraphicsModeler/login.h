#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QDialog>
#include <QMessageBox>
#include "mainwindow.h"

//class MainWindow;

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();
    bool getShutDownWindow(){return shutDownWindow;}
     //void setUpMain(MainWindow &w){mainwindow = w;}
     //const void showMain(){mainwindow.show();}
    void setUserIsAdmin(bool powers) {userIsAdmin = powers;}

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::login *ui;
    MainWindow *mainwindow;
    bool userIsAdmin;
    bool shutDownWindow;
};
#endif // LOGIN_H
