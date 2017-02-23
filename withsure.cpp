#include "withsure.h"
#include "ui_withsure.h"

WithSure::WithSure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WithSure)
{
    ui->setupUi(this);
}

WithSure::~WithSure()
{
    delete ui;
}
