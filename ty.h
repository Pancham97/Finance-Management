#ifndef TY_H
#define TY_H

#include <QDialog>

namespace Ui {
class TY;
}

class TY : public QDialog
{
    Q_OBJECT
    
public:
    explicit TY(QWidget *parent = 0);
    ~TY();


private:
    Ui::TY *ui;
};

#endif // TY_H
