#ifndef DEPAMT_H
#define DEPAMT_H

#include <QDialog>

namespace Ui {
class DepAmt;
}

class DepAmt : public QDialog
{
    Q_OBJECT
    
public:
    explicit DepAmt(QWidget *parent = 0);
    ~DepAmt();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::DepAmt *ui;
};

#endif // DEPAMT_H
