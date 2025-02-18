#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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


private:
    Ui::MainWindow *ui;
    QString num1, num2;
    int state = 0;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
