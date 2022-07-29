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

//! A login class
/*!
 * represents a login object
 */
class login : public QWidget
{
    Q_OBJECT

public:
    //! Default constructor
    /*!
     * \param parent initialized to nullptr
     */
    login(QWidget *parent = nullptr);

    //! Destructor
    /*!
     * Destroys login
     */
    ~login();

    //bool getShutDownWindow(){return shutDownWindow;}
     //void setUpMain(MainWindow &w){mainwindow = w;}
     //const void showMain(){mainwindow.show();}

    //! void function
    /*!
     * \param powers, gets assigned to userIsAdmin
     */
    void setUserIsAdmin(bool powers) {userIsAdmin = powers;}

    //! bool function
    /*!
     * \return userIsAdmin
     */
    bool getUserIsAdmin() {return userIsAdmin;}

private slots:

    //! void function
    /*!
     * when button is pressed, user will either log in, or be notified that their username or password is wrong
     */
    void on_pushButton_Login_clicked();

    //! void function
    /*!
     * when X is pressed, log in screen will close
     */
    void on_ExitLogin_clicked();

 //   void on_lineEdit_Username_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::login *ui;
    MainWindow *mainwindow;
    bool userIsAdmin;
    //bool shutDownWindow;
};
#endif // LOGIN_H
