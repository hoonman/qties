#include "aboutus.h"
#include "ui_aboutus.h"

AboutUs::AboutUs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutUs)
{
    ui->setupUi(this);

    setWindowTitle("About Us");
}

AboutUs::~AboutUs()
{
    delete ui;
}
