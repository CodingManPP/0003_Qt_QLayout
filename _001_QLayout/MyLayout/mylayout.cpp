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

    //【3】窗体布局管理器




}

MyLayout::~MyLayout()
{
    delete ui;
}
