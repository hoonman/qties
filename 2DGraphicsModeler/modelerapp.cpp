#include "modelerapp.h"
#include "ui_modelerapp.h"

ModelerApp::ModelerApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModelerApp)
{
    ui->setupUi(this);
}

ModelerApp::~ModelerApp()
{
    delete ui;
}
