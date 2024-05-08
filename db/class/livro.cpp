#include <QString>
#include "livro.h"


Livro::Livro(QString nome, int id_autor, int id_editora) {
    this->nome = nome;
    this->id_autor = id_autor;
    this->id_editora = id_editora;
}

QString Livro::GetNome()
{
    return this->nome;
}


void Livro::SetNome(QString nome)
{
    this->nome = nome;
}


int Livro::GetIdAutor()
{
    return this->id_autor;
}

void Livro::SetIdAutor(int id_autor)
{
    this->id_autor = id_autor;
}


int Livro::GetIdEditora()
{
    return this->id_editora;
}


void Livro::SetIdEditora(int id_editora)
{
    this->id_editora = id_editora;
}
