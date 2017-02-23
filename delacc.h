#ifndef DELACC_H
#define DELACC_H

#include <QDialog>

namespace Ui {
class DelAcc;
}

class DelAcc : public QDialog
{
    Q_OBJECT
    
public:
    explicit DelAcc(QWidget *parent = 0);
    ~DelAcc();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::DelAcc *ui;
};

#endif // DELACC_H
