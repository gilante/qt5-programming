#include "myqt5app.h"
#include "ui_myqt5app.h"

MyQt5App::MyQt5App(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyQt5App)
{
    ui->setupUi(this);
}

MyQt5App::~MyQt5App()
{
    delete ui;
}
