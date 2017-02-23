#ifndef DEPSURE_H
#define DEPSURE_H

#include <QDialog>

namespace Ui {
class DepSure;
}

class DepSure : public QDialog
{
    Q_OBJECT
    
public:
    explicit DepSure(QWidget *parent = 0);
    ~DepSure();
    
private:
    Ui::DepSure *ui;
};

#endif // DEPSURE_H
