#ifndef CREATEACC_H
#define CREATEACC_H

#include <QDialog>

namespace Ui {
class CreateAcc;
}

class CreateAcc : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateAcc(QWidget *parent = 0);
    ~CreateAcc();
    
private:
    Ui::CreateAcc *ui;
};

#endif // CREATEACC_H
