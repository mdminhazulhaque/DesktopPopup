#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    popup = new Popup;

    connect(popup, SIGNAL(clicked()), this, SLOT(clickedPopup()));
    connect(popup, SIGNAL(closed()), this, SLOT(closedPopup()));

    connect(ui->bClose, SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(ui->bShow, SIGNAL(clicked()), this, SLOT(showPopup()));

    setGeometry(QStyle::alignedRect(
                    Qt::RightToLeft,
                    Qt::AlignCenter,
                    size(),
                    qApp->desktop()->availableGeometry()));

    setWindowTitle("Popup Manager");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showPopup()
{
    //showMinimized();
    popup->showPopup(
                ui->title->text(),
                ui->description->toPlainText()
                );
}

void MainWindow::closedPopup()
{
    ui->feedback->setText("Closed at "+ QDateTime::currentDateTime().toString(Qt::ISODate));
}

void MainWindow::clickedPopup()
{
    ui->feedback->setText("Clicked at "+ QDateTime::currentDateTime().toString(Qt::ISODate));

    // Add code to be performed when popup is clicked
    // Perhaps opening URI or show MainWindow
}
