#include "modacc.h"
#include "ui_modacc.h"

ModAcc::ModAcc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModAcc)
{
    ui->setupUi(this);
}

ModAcc::~ModAcc()
{
    delete ui;
}
