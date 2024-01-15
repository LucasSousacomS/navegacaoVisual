//addNew.h
#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>

namespace Ui {
class addNew;
}

class addNew : public QDialog
{
    Q_OBJECT

public:
    explicit addNew(QWidget *parent = nullptr);
    ~addNew();

signals:
    void dadosAdicionados(const QString &ref, const QString &proa, const QString &distParc,
                          const QString &distAc, const QString &sit, const QString &sitDist,
                          const QString &tempCalPar, const QString &tempCalAc,
                          const QString &hrEst, const QString &hrReal,
                          const QString &tmpGasto, const QString &velRes);

private slots:
    void on_push_cancel_clicked();

    void on_push_addTb_clicked();

private:
    Ui::addNew *ui;
};

#endif // ADDNEW_H
