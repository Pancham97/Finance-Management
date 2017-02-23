#include "createacc.h"
#include "ui_createacc.h"

CreateAcc::CreateAcc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAcc)
{
    ui->setupUi(this);
}

CreateAcc::~CreateAcc()
{
    delete ui;
}
