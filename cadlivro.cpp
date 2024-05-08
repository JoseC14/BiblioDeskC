#include "cadlivro.h"
#include "ui_cadlivro.h"
#include "db/autor_db.h"
#include <QInputDialog>
#include <QMessageBox>

CadLivro::CadLivro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CadLivro)
{
    ui->setupUi(this);
}

CadLivro::~CadLivro()
{
    delete ui;
}

QString CadLivro::InputItem()
{
    QString text = QInputDialog::getText(this,"Cadastro","digite abaixo...");
    return text;
}

void CadLivro::CadItem(QString item, QString type)
{

    QString sucess = type+" cadastrado(a)";
    QMessageBox box;
    if(item != "")
    {
        Autor_db autor;
        autor.InsertAutor(item);
        box.about(this,item,sucess);
    }
}

void CadLivro::on_btnCadEditora_clicked()
{
    CadItem(InputItem(),"Editora");
}


void CadLivro::on_btnCadAutor_clicked()
{
    CadItem(InputItem(),"Autor");
}

