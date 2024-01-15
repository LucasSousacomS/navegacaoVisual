//mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addnew.h"
#include <QDebug>
int cont = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), widgetAddNew(new addNew(this))
{
    ui->setupUi(this);
    ui->tb->setColumnCount(10);
    connect(ui->push_add, &QPushButton::clicked, this, &MainWindow::on_push_add_clicked);
    connect(widgetAddNew, &addNew::dadosAdicionados, this, &MainWindow::receberDados);
    qDebug() << "Abriu";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receberDados(const QString &ref, const QString &proa, const QString &distParc,
                              const QString &distAc, const QString &sit, const QString &sitDist,
                              const QString &tempCalPar, const QString &tempCalAc,
                              const QString &hrEst, const QString &hrReal,
                              const QString &tmpGasto, const QString &velRes){
    widgetAddNew->close();
    qDebug() << "Entrou no slot" << proa;
    ui->tb->insertRow(cont);
    ui->tb->setItem(cont, 0, new QTableWidgetItem(ref));
    ui->tb->setItem(cont, 1, new QTableWidgetItem(proa));
    ui->tb->setItem(cont, 2, new QTableWidgetItem(distParc));
    ui->tb->setItem(cont, 3, new QTableWidgetItem(sit));
    ui->tb->setItem(cont, 4, new QTableWidgetItem(sitDist));
    ui->tb->setItem(cont, 5, new QTableWidgetItem(tempCalPar));
    ui->tb->setItem(cont, 6, new QTableWidgetItem(hrEst));
    ui->tb->setItem(cont, 7, new QTableWidgetItem(hrReal));
    ui->tb->setItem(cont, 8, new QTableWidgetItem(tmpGasto));
    ui->tb->setItem(cont, 9, new QTableWidgetItem(velRes));
    qDebug() << "cont = " << cont;
    cont++;
}

void MainWindow::on_push_remove_clicked()
{
    qDebug() << "-";
}


void MainWindow::on_push_add_clicked()
{
    qDebug() << "+";
    widgetAddNew->show();

}

