#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <popup.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void showPopup();
    void closedPopup();
    void clickedPopup();

private:
    Ui::MainWindow *ui;
    Popup *popup;
};

#endif // MAINWINDOW_H
