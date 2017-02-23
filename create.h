#ifndef CREATE_H
#define CREATE_H

#include <QDialog>

namespace Ui {
class create;
}

class create : public QDialog
{
    Q_OBJECT
    
public:
    explicit create(QWidget *parent = 0);
    ~create();
    
private:
    Ui::create *ui;
};

#endif // CREATE_H
