#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QMainWindow>

namespace Ui {
class AboutUs;
}

class AboutUs : public QMainWindow
{
    Q_OBJECT

public:
    explicit AboutUs(QWidget *parent = nullptr);
    ~AboutUs();
private:
    Ui::AboutUs *ui;
};

#endif // ABOUTUS_H
