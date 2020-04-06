#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QListWidgetItem>
#include "diagram/diagram.h"
#include "cursor/gcursor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_listWidget_currentRowChanged(int currentRow);

private:
    Ui::MainWindow *ui;
    Diagram *scene;
    GCursor* cursor;
};
#endif // MAINWINDOW_H
