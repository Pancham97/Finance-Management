#include "withamt.h"
#include "ui_withamt.h"
#include "withsure.h"

WithAmt::WithAmt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WithAmt)
{
    ui->setupUi(this);
}

WithAmt::~WithAmt()
{
    delete ui;
}

void WithAmt::on_pushButton_clicked()
{
    WithSure withsure;
    withsure.setModal(true);
    withsure.exec();
}
