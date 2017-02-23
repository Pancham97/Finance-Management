#include "delsure.h"
#include "ui_delsure.h"

DelSure::DelSure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelSure)
{
    ui->setupUi(this);
}

DelSure::~DelSure()
{
    delete ui;
}
