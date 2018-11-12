/********************************************************************************
** Form generated from reading UI file 'mylayout.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLAYOUT_H
#define UI_MYLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLayout
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QFontComboBox *fontComboBox;

    void setupUi(QWidget *MyLayout)
    {
        if (MyLayout->objectName().isEmpty())
            MyLayout->setObjectName(QStringLiteral("MyLayout"));
        MyLayout->resize(400, 164);
        horizontalLayout = new QHBoxLayout(MyLayout);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit = new QTextEdit(MyLayout);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        fontComboBox = new QFontComboBox(MyLayout);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);


        retranslateUi(MyLayout);

        QMetaObject::connectSlotsByName(MyLayout);
    } // setupUi

    void retranslateUi(QWidget *MyLayout)
    {
        MyLayout->setWindowTitle(QApplication::translate("MyLayout", "MyLayout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyLayout: public Ui_MyLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLAYOUT_H
