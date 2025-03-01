#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeOut();
    void updateProgressBar();
    void setGameInfoText(QString);

public slots:
    void timeClickHandler();
    void startClickHandler();
    void stopClickHandler();
    void switchHandler();

private:
    Ui::MainWindow *ui;
    short player1Time = 0, player2Time = 0, currentPlayer;
    bool timeSelected = false; //Että pelin voi lopettaa vain painamalla stop game
    bool started = false;
    QTimer* pQTimer;
};
#endif // MAINWINDOW_H
