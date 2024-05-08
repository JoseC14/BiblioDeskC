#ifndef LIVRO_H
#define LIVRO_H

class Livro
{
private:
    QString nome;
    int id_autor;
    int id_editora;
public:
    Livro(QString nome, int id_autor, int id_editora);

    QString GetNome();
    void SetNome(QString nome);

    int GetIdAutor();
    void SetIdAutor(int id_autor);

    int GetIdEditora();
    void SetIdEditora(int id_editora);
};

#endif // LIVRO_H
