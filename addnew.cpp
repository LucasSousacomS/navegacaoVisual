//addnew.cpp
#include "addnew.h"
#include "ui_addnew.h"
#include <QDebug>

addNew::addNew(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addNew)
{
    ui->setupUi(this);
}

addNew::~addNew()
{
    delete ui;
}

void addNew::on_push_cancel_clicked()
{
    this->close();
}


void addNew::on_push_addTb_clicked()
{
    QString ref = ui->ln_ref->text();
    QString proa = ui->ln_proa->text();
    QString distParc = ui->ln_dParc->text();
    QString distAc = ui->ln_dAc->text();
    QString sit = ui->cmb_sit->currentText();
    QString sitDist = ui->ln_sitDist->text();
    QString tempCalPar = ui->ln_tempParc->text();
    QString tempCalAc = ui->ln_tempAc->text();
    QString hrEst = ui->ln_hEst->text();
    QString hrReal = ui->ln_hRe->text();
    QString tmpGasto = ui->ln_horaReal->text();
    QString velRes = ui->ln_velRes->text();
    emit dadosAdicionados(ref, proa, distParc, distAc, sit, sitDist,
                          tempCalPar, tempCalAc, hrEst, hrReal,
                          tmpGasto, velRes);
    qDebug() << "ref";
}

