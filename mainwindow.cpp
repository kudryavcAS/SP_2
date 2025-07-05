#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "regex_str.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_Color_clicked()
{
    regex_str rgx;
    QString str = ui->text_Color->toPlainText();
    ui->color_Browser->setText(rgx.color(str));
}


void MainWindow::on_Button_Palindrom_clicked()
{
    regex_str rgx;
    QString str = ui->text_Pal->toPlainText();
    ui->palindr_Browser->setText(rgx.palindrom(str));
}

