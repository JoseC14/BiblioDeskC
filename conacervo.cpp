#include "conacervo.h"
#include "ui_conacervo.h"

ConAcervo::ConAcervo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ConAcervo)
{
    ui->setupUi(this);
}

ConAcervo::~ConAcervo()
{
    delete ui;
}
