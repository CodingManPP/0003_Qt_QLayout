#include "mylayout.h"
#include "ui_mylayout.h"
#include <QHBoxLayout>

#include <QGridLayout>

MyLayout::MyLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyLayout)
{
    ui->setupUi(this);
#if 0
    //【1】基本布局管理器
    QHBoxLayout *layout = new QHBoxLayout;      //新建水平布局管理器
    layout->addWidget(ui->fontComboBox);        //向布局管理器中添加部件
    layout->addWidget(ui->textEdit);
    layout->setSpacing(50);                     //设置部件间的间隔
    layout->setContentsMargins(0,0,50,100);     //设置布局管理器到边界的距离，参数的设置顺序依次是：左、上、右、下
    setLayout(layout);
//    insertWidget(layout);
#endif

#if 0
    //【2】栅格布局管理器
    QGridLayout *gridLayout = new QGridLayout;
    //添加部件，从第0行0列开始，占据1行2列
    gridLayout->addWidget(ui->fontComboBox,0,0,1,2);
    //添加部件，从第0行2列开始，占据1行1列
    gridLayout->addWidget(ui->pushButton,0,2,1,1);
    //添加部件，从第0行0列开始，占据1行3列
    gridLayout->addWidget(ui->textEdit,1,0,1,3);
    setLayout(gridLayout);
#endif

    //【3】可扩展窗口管理器
    /*让文本编辑器隐藏，也可以使用setVisible(false)*/
    ui->textEdit->hide();
}

MyLayout::~MyLayout()
{
    delete ui;
}

/**
  * 【3】可扩展窗口管理器
  */
#if 1
void MyLayout::on_pushButton_toggled(bool checked)  //显示窗口按钮
{
    ui->textEdit->setVisible(checked);              //设置文本编辑器的显示和隐藏
    if (checked){
        ui->pushButton->setText(tr("隐藏可扩展窗口"));
    }else{
        ui->pushButton->setText(tr("显示可扩展窗口"));
    }
}
#endif

