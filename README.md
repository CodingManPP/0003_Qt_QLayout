# 0003_Qt_QLayout
QLayout 使用

## 实例3
可扩展窗口实例
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

