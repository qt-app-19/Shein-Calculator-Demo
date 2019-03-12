#include "calculator.h"
#include "ui_calculator.h"
#include <array>

double oldVal = 0.0;
double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    std::array<QPushButton*, 10> numButtons;
    for(int i = 0; i < 10; i++ ){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

    // Connect signals and slots for math buttons
    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    // Connect equals button
    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    // Connect change sign
    connect(ui->ChangeSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::updateDisplay() {
	ui->Display->setText(QString::number(calcVal, 'g', 10));
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *) sender();
    QString butval = button->text();
    QString displayVal = ui->Display->text();
    int nextInt = butval.toInt();
    calcVal = calcVal * 10 + nextInt;
    updateDisplay();
}

void Calculator::resetTriggers(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
}

void Calculator::MathButtonPressed(){
    resetTriggers();
    QString displayString = ui->Display->text();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else if(QString::compare(butVal, "-", Qt::CaseInsensitive) == 0){
        subTrigger = true;
    } else {
        multTrigger = true;
    }
    ui->Display->setText("");
    oldVal = calcVal;
    calcVal = 0;
    updateDisplay();
}

void Calculator::EqualButtonPressed(){
    if(divTrigger)
        calcVal = oldVal / calcVal;
    else if(multTrigger)
        calcVal = oldVal * calcVal;
    else if(addTrigger)
        calcVal = oldVal + calcVal;
    else if(subTrigger)
        calcVal = oldVal - calcVal;
    else
        return;
    resetTriggers();
    oldVal = 0;
    updateDisplay();
}

void Calculator::ChangeNumberSign(){
    calcVal *= -1;
}
