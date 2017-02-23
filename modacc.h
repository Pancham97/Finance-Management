#ifndef MODACC_H
#define MODACC_H

#include <QDialog>

namespace Ui {
class ModAcc;
}

class ModAcc : public QDialog
{
    Q_OBJECT
    
public:
    explicit ModAcc(QWidget *parent = 0);
    ~ModAcc();
    
private:
    Ui::ModAcc *ui;
};

#endif // MODACC_H
