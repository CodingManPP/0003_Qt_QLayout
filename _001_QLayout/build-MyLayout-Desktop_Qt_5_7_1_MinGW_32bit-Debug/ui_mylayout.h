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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyLayout
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QLabel *aLabel;
    QSpinBox *aSpinBox;
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton;

    void setupUi(QWidget *MyLayout)
    {
        if (MyLayout->objectName().isEmpty())
            MyLayout->setObjectName(QStringLiteral("MyLayout"));
        MyLayout->resize(400, 212);
        formLayoutWidget = new QWidget(MyLayout);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 90, 381, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nLabel = new QLabel(formLayoutWidget);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(formLayoutWidget);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(formLayoutWidget);
        sLabel->setObjectName(QStringLiteral("sLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(formLayoutWidget);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sComboBox);

        aLabel = new QLabel(formLayoutWidget);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(formLayoutWidget);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, aSpinBox);

        mLabel = new QLabel(formLayoutWidget);
        mLabel->setObjectName(QStringLiteral("mLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLabel);

        mLineEdit = new QLineEdit(formLayoutWidget);
        mLineEdit->setObjectName(QStringLiteral("mLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mLineEdit);

        textEdit = new QTextEdit(MyLayout);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 381, 31));
        widget = new QWidget(MyLayout);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 296, 25));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(widget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout_2->addWidget(fontComboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
        mLabel->setBuddy(mLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MyLayout);

        QMetaObject::connectSlotsByName(MyLayout);
    } // setupUi

    void retranslateUi(QWidget *MyLayout)
    {
        MyLayout->setWindowTitle(QApplication::translate("MyLayout", "MyLayout", Q_NULLPTR));
        nLabel->setText(QApplication::translate("MyLayout", "\345\247\223\345\220\215(&N)", Q_NULLPTR));
        sLabel->setText(QApplication::translate("MyLayout", "\346\200\247\345\210\253(&S)", Q_NULLPTR));
        aLabel->setText(QApplication::translate("MyLayout", "\345\271\264\351\276\204(&A)", Q_NULLPTR));
        mLabel->setText(QApplication::translate("MyLayout", "\351\202\256\347\256\261(&M)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyLayout", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyLayout: public Ui_MyLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLAYOUT_H
