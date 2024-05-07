#include "emplivro.h"
#include "ui_emplivro.h"

EmpLivro::EmpLivro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EmpLivro)
{
    ui->setupUi(this);
}

EmpLivro::~EmpLivro()
{
    delete ui;
}
