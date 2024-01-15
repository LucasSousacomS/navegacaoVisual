//mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addnew.h"

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

private slots:
    void receberDados(const QString &ref, const QString &proa, const QString &distParc,
                      const QString &distAc, const QString &sit, const QString &sitDist,
                      const QString &tempCalPar, const QString &tempCalAc,
                      const QString &hrEst, const QString &hrReal,
                      const QString &tmpGasto, const QString &velRes);

    void on_push_remove_clicked();

    void on_push_add_clicked();

private:
    Ui::MainWindow *ui;
    addNew *widgetAddNew;
};
#endif // MAINWINDOW_H
