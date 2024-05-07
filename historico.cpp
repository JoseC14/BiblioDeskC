#include "historico.h"
#include "ui_historico.h"

Historico::Historico(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Historico)
{
    ui->setupUi(this);
}

Historico::~Historico()
{
    delete ui;
}
