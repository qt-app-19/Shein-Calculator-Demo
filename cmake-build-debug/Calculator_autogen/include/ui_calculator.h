/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Add;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *Clear;
    QPushButton *Button4;
    QPushButton *Button6;
    QPushButton *MemClear;
    QPushButton *Subtract;
    QPushButton *Button3;
    QPushButton *Button8;
    QPushButton *Button1;
    QLineEdit *Display;
    QPushButton *Divide;
    QPushButton *Multiply;
    QPushButton *Equals;
    QPushButton *MemGet;
    QPushButton *Button0;
    QPushButton *ChangeSign;
    QPushButton *MemAdd;
    QPushButton *Button9;
    QPushButton *Button7;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(214, 214);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(5);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        Display->setMinimumSize(QSize(45, 0));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Equals = new QPushButton(centralWidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        MemGet = new QPushButton(centralWidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setMinimumSize(QSize(46, 0));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 214, 22));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        Add->setText(QApplication::translate("Calculator", "+", nullptr));
        Button5->setText(QApplication::translate("Calculator", "5", nullptr));
        Button2->setText(QApplication::translate("Calculator", "2", nullptr));
        Clear->setText(QApplication::translate("Calculator", "AC", nullptr));
        Button4->setText(QApplication::translate("Calculator", "4", nullptr));
        Button6->setText(QApplication::translate("Calculator", "6", nullptr));
        MemClear->setText(QApplication::translate("Calculator", "M-", nullptr));
        Subtract->setText(QApplication::translate("Calculator", "-", nullptr));
        Button3->setText(QApplication::translate("Calculator", "3", nullptr));
        Button8->setText(QApplication::translate("Calculator", "8", nullptr));
        Button1->setText(QApplication::translate("Calculator", "1", nullptr));
        Display->setText(QApplication::translate("Calculator", "0.0", nullptr));
        Divide->setText(QApplication::translate("Calculator", "/", nullptr));
        Multiply->setText(QApplication::translate("Calculator", "*", nullptr));
        Equals->setText(QApplication::translate("Calculator", "=", nullptr));
        MemGet->setText(QApplication::translate("Calculator", "M", nullptr));
        Button0->setText(QApplication::translate("Calculator", "0", nullptr));
        ChangeSign->setText(QApplication::translate("Calculator", "+/-", nullptr));
        MemAdd->setText(QApplication::translate("Calculator", "M+", nullptr));
        Button9->setText(QApplication::translate("Calculator", "9", nullptr));
        Button7->setText(QApplication::translate("Calculator", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
