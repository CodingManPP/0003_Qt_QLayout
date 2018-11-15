# 0003_Qt_QLayout
QLayout 使用

## 实例3 可扩展窗口实例
在构造函数中：
```
 //【3】可扩展窗口管理器
    /*让文本编辑器隐藏，也可以使用setVisible(false)*/
    ui->textEdit->hide();
```
使用信号槽：
头文件中的槽声明(自动生成)：
```
private slots:
    void on_pushButton_toggled(bool checked);
```

```
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
```
## 实例4 分裂器QSplitter实例
在ui文件中使用：“布局->使用分裂器水平布局”

## 实例5 伙伴关系
* 伙伴关系：提供了助记符(快捷键)来定位键盘焦点到对应的部件上，这个部件就叫QLabel的伙伴。
* 英文标签：在字符串的一个字母前面增加“&”符号，就指定了该标签的加速键是Alt+这个字母。
* 中文：需要在小括号中指定加速键的字母。

## 实例6 设置Tab键的顺序
_003_Q_buddy:设置Tab键的顺序，使用两种方式：
* 1.直接在设计师中设置；
* 2.通过代码设置"


