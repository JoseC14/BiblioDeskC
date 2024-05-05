#include "login.h"
#include "mainwindow.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnLogin_clicked()
{
    MainWindow *mainwindow = new MainWindow();
    mainwindow->show();
    mainwindow->setVisible(true);
    this->setVisible(false);
}

