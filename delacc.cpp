#include "delacc.h"
#include "ui_delacc.h"
#include "delsure.h"

DelAcc::DelAcc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelAcc)
{
    ui->setupUi(this);
}

DelAcc::~DelAcc()
{
    delete ui;
}

void DelAcc::on_pushButton_clicked()
{
    DelSure sure;
    sure.setModal(true);
    sure.exec();
}
