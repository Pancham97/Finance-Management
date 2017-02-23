#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createacc.h"
#include "depamt.h"
#include "withamt.h"
#include "enquiry.h"
#include "list.h"
#include "delacc.h"
#include "modacc.h"
#include "ty.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    CreateAcc ct;
    ct.setModal(true);
    ct.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    DepAmt dep;
    dep.setModal(true);
    dep.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    WithAmt withamt;
    withamt.setModal(true);
    withamt.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Enquiry enq;
    enq.setModal(true);
    enq.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    List ls;
    ls.setModal(true);
    ls.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    DelAcc del;
    del.setModal(true);
    del.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    ModAcc mod;
    mod.setModal(true);
    mod.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    TY thank;
    thank.setModal(true);
    thank.exec();
}
