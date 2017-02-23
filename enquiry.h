#ifndef ENQUIRY_H
#define ENQUIRY_H

#include <QDialog>

namespace Ui {
class Enquiry;
}

class Enquiry : public QDialog
{
    Q_OBJECT
    
public:
    explicit Enquiry(QWidget *parent = 0);
    ~Enquiry();
    
private:
    Ui::Enquiry *ui;
};

#endif // ENQUIRY_H
