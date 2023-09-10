#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->letter->setChecked(true);
    QPixmap pix("/Users/bartoszbugajski/Downloads/letter.png");
    ui->image2_label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->pocztowka->isChecked())
    {
        ui->price->setText("1 zł");
    }
    else if(ui->letter->isChecked())
    {
        ui->price->setText("1,5 zł");
    }
    else if(ui->box->isChecked())
    {
        ui->price->setText("10 zł");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->code->text().size()!=5)
    {
        QMessageBox::information(this,"Informacja", "Nieprawidłowa liczba cyfr w kodzie pocztowym", QMessageBox::Ok);
    }
}

