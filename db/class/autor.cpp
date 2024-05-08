#include <QString>
#include "autor.h"


Autor::Autor(QString nome)
{
    this->nome = nome;
}

QString Autor::GetNome()
{
    return nome;
}

void Autor::SetNome(QString nome)
{
    this->nome = nome;
}
