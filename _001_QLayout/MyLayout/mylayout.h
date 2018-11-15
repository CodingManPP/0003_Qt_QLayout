#ifndef MYLAYOUT_H
#define MYLAYOUT_H

#include <QWidget>

namespace Ui {
class MyLayout;
}

class MyLayout : public QWidget
{
    Q_OBJECT

public:
    explicit MyLayout(QWidget *parent = 0);
    ~MyLayout();

private slots:
    void on_pushButton_toggled(bool checked);

private:
    Ui::MyLayout *ui;
};

#endif // MYLAYOUT_H
