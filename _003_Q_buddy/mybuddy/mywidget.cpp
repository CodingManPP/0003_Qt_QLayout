#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    //使用代码实现Tab键的选择顺序方法2：使用代码实现
    setTabOrder(ui->lineEdit,ui->spinBox);
    setTabOrder(ui->spinBox,ui->pushButton);
    setTabOrder(ui->pushButton,ui->checkBox);
}

MyWidget::~MyWidget()
{
    delete ui;
}
