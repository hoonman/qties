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
    bool getUserIsAdmin() {return userIsAdmin;}

private slots:
    void on_pushButton_Login_clicked();

    void on_ExitLogin_clicked();

    void on_lineEdit_Username_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::login *ui;
    MainWindow *mainwindow;
    bool userIsAdmin;
    bool shutDownWindow;
};
#endif // LOGIN_H
