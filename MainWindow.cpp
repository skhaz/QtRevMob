#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "RevMob.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    RevMob *r = RevMob::instance();
    r->startSession("PUT YOUR KEY HERE");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    RevMob *r = RevMob::instance();
    r->showFullscreen();
}

void MainWindow::on_pushButton_2_clicked()
{
    RevMob *r = RevMob::instance();
    r->showPopup();
}
