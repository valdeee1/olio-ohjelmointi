#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->N0,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N1,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N2,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N3,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N4,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N5,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N6,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N7,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N8,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->N9,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);

    connect(ui->addButton,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);
    connect(ui->subButton,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);
    connect(ui->multButton,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);
    connect(ui->divButton,&QPushButton::clicked,this,&MainWindow::addSubMulDivHandler);

    connect(ui->ResetButton,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);
    connect(ui->enterButton,&QPushButton::clicked,this,&MainWindow::clearAndEnterClickHandler);

    connect(ui->ResetButton,&QPushButton::clicked,this,&MainWindow::resetLineEdits);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName = button->objectName();
    if(state == 0){
        ui->num1->setText(ui->num1->text()+numberName.at(1));
        num1 +=numberName.at(1);
    }
    else{
        ui->num2->setText(ui->num2->text()+numberName.at(1));
        num2 += numberName.at(1);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString buttonName = button->objectName();
    if(buttonName == "enterButton"){
        float eNum1 = num1.toFloat();
        float eNum2 = num2.toFloat();
        switch(operand){
            case 1:
                result = eNum1+eNum2;
                ui->result->setText(QString::number(result));
                break;
            case 2:
                result = eNum1-eNum2;
                ui->result->setText(QString::number(result));
                break;
            case 3:
                result = eNum1*eNum2;
                ui->result->setText(QString::number(result));
                break;
            case 4:
                result = eNum1/eNum2;
                if(eNum2 == 0){
                    ui->result->setText("Ei tämmösiä");
                    break;
                }
                ui->result->setText(QString::number(result));
                break;

        }

    }
    else{
        state = 0;
        num1 = "";
        num2 = "";
    }


}

void MainWindow::addSubMulDivHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString operandName = button->objectName();
    if(operandName == "addButton"){
        operand = 1;
    }
    else if(operandName == "subButton"){
        operand = 2;
    }
    else if(operandName == "multButton"){
        operand = 3;
    }
    else{
        operand = 4;
    }
    state = 2;
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

