#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QMainWindow>

namespace Ui {
class AboutUs;
}
//!  A AboutUs class
class AboutUs : public QMainWindow
{
    Q_OBJECT

public:

    //! Default constructor
    /*!
     *  \param *parent initialized to nullptr
     */
    explicit AboutUs(QWidget *parent = nullptr);

    //! destructor
    /*!
     *  perform nothing
     */
    ~AboutUs();
private:
    Ui::AboutUs *ui;
};

#endif // ABOUTUS_H
