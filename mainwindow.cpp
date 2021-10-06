#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QClipboard>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setVisible(false);

    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::WindowDoesNotAcceptFocus);

    //uncomment this line below if you want it start without focus
//    setAttribute(Qt::WA_ShowWithoutActivating, true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setVisible(true);
}

