#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(spaceRemove()));

}
void MainWindow::spaceRemove(){
    QString txt = ui->textEdit->toPlainText();
    QString out = txt.replace(QString("\n"),QString(" "));
    ui->textEdit->setPlainText(out);
}
MainWindow::~MainWindow()
{
    delete ui;
}
