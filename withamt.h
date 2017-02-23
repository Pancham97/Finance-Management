#ifndef WITHAMT_H
#define WITHAMT_H

#include <QDialog>

namespace Ui {
class WithAmt;
}

class WithAmt : public QDialog
{
    Q_OBJECT
    
public:
    explicit WithAmt(QWidget *parent = 0);
    ~WithAmt();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::WithAmt *ui;
};

#endif // WITHAMT_H
