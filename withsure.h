#ifndef WITHSURE_H
#define WITHSURE_H

#include <QDialog>

namespace Ui {
class WithSure;
}

class WithSure : public QDialog
{
    Q_OBJECT
    
public:
    explicit WithSure(QWidget *parent = 0);
    ~WithSure();
    
private:
    Ui::WithSure *ui;
};

#endif // WITHSURE_H
