#ifndef DELSURE_H
#define DELSURE_H

#include <QDialog>

namespace Ui {
class DelSure;
}

class DelSure : public QDialog
{
    Q_OBJECT
    
public:
    explicit DelSure(QWidget *parent = 0);
    ~DelSure();
    
private:
    Ui::DelSure *ui;
};

#endif // DELSURE_H
