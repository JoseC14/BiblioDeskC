#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "login.h"
#include "home.h"
#include "cadlivro.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWindos->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddWindow(QWidget *window)
{
    ui->tabWindos->addTab(window,window->windowTitle());
}

void MainWindow::on_btnInicio_clicked()
{
    AddWindow(new Home);
}


void MainWindow::on_btnCadLivro_clicked()
{
    AddWindow(new CadLivro);
}

