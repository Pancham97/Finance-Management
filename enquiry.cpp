#include "enquiry.h"
#include "ui_enquiry.h"

Enquiry::Enquiry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enquiry)
{
    ui->setupUi(this);
}

Enquiry::~Enquiry()
{
    delete ui;
}
