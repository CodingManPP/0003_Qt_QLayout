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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLayout
{
public:
    QVBoxLayout *verticalLayout;
    QFontComboBox *fontComboBox;
    QTextEdit *textEdit;

    void setupUi(QWidget *MyLayout)
    {
        if (MyLayout->objectName().isEmpty())
            MyLayout->setObjectName(QStringLiteral("MyLayout"));
        MyLayout->resize(400, 164);
        verticalLayout = new QVBoxLayout(MyLayout);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fontComboBox = new QFontComboBox(MyLayout);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        verticalLayout->addWidget(fontComboBox);

        textEdit = new QTextEdit(MyLayout);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


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
