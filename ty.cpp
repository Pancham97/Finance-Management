#include "ty.h"
#include "ui_ty.h"

TY::TY(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TY)
{
    ui->setupUi(this);
}

TY::~TY()
{
    delete ui;
}
