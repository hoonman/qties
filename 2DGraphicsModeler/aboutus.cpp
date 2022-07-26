#include "aboutus.h"
#include "ui_aboutus.h"
#include <QResource>


AboutUs::AboutUs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutUs)
{
    ui->setupUi(this);

    setWindowTitle("About Us");

    QPixmap squirrel("qt.png");
    int sW = ui->Squirrel->width();
    int sH = ui->Squirrel->height();
    ui->Squirrel->setPixmap(squirrel.scaled(sW,sH));

    QPixmap background("background.jpg");
    int bW = ui->Background->width();
    int bH = ui->Background->height();
    ui->Background->setPixmap(background.scaled(bW,bH));


    //easter egg "loot the chris";

}

AboutUs::~AboutUs()
{
    delete ui;
}
