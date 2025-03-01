#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);
    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);
    connect(ui->SwitchPlayer,&QPushButton::clicked,this,&MainWindow::switchHandler);
    connect(ui->startButton,&QPushButton::clicked,this,&MainWindow::startClickHandler);
    connect(ui->stopButton,&QPushButton::clicked,this,&MainWindow::stopClickHandler);
    connect(ui->fiveMinute,&QPushButton::clicked,this,&MainWindow::timeClickHandler);
    connect(ui->twoMinute,&QPushButton::clicked,this,&MainWindow::timeClickHandler);
    connect(pQTimer,&QTimer::timeout,this,&MainWindow::timeOut);
    setGameInfoText("Select time and press start!");

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
}

void MainWindow::timeOut()
{
    if(player1Time == 0){
        stopClickHandler();
        setGameInfoText("Player 2 won!");
        timeSelected = false;
    }
    else if(player2Time == 0){
        stopClickHandler();
        setGameInfoText("Player 1 won!");
        timeSelected = false;
    }
    else{
        updateProgressBar();
    }
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 0){
        player1Time--;
        ui->progressBar1->setValue(player1Time);
    }
    else{
        player2Time--;
        ui->progressBar2->setValue(player2Time);
    }
}

void MainWindow::setGameInfoText(QString teksti)
{
    ui->gameStatus->setText(teksti);
}

void MainWindow::timeClickHandler()
{
    timeSelected = true;
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString time = button->objectName();
    if(time == "twoMinute"){
        pQTimer->setInterval(1200);
    }
    else{
        pQTimer->setInterval(3000);
    }
    setGameInfoText("Ready to play!");
    player1Time = 100;
    player2Time = 100;
    ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);
}

void MainWindow::startClickHandler()
{
    if(!timeSelected){
        return;
    }
    currentPlayer = 0;
    setGameInfoText("Game ongoing!");
    pQTimer->start();
}

void MainWindow::stopClickHandler()
{
    timeSelected = false;
    pQTimer->stop();
    player1Time = 100;
    player2Time = 100;
    setGameInfoText("Choose time and select 'Start game' to play again.");

}

void MainWindow::switchHandler()
{
    if(currentPlayer == 0){
        currentPlayer = 1;
    }
    else{
        currentPlayer = 0;
    }
}
