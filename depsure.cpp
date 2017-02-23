#include "depsure.h"
#include "ui_depsure.h"

DepSure::DepSure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DepSure)
{
    ui->setupUi(this);
}

DepSure::~DepSure()
{
    delete ui;
}
