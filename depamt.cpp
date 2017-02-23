#include "depamt.h"
#include "ui_depamt.h"
#include "depsure.h"

DepAmt::DepAmt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DepAmt)
{
    ui->setupUi(this);
}

DepAmt::~DepAmt()
{
    delete ui;
}

void DepAmt::on_pushButton_clicked()
{
    DepSure depsure;
    depsure.setModal(true);
    depsure.exec();
}
