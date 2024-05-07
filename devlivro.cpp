#include "devlivro.h"
#include "ui_devlivro.h"

DevLivro::DevLivro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DevLivro)
{
    ui->setupUi(this);
}

DevLivro::~DevLivro()
{
    delete ui;
}
