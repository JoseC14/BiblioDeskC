#ifndef AUTOR_H
#define AUTOR_H

class Autor
{
private:
    QString nome;
public:
    Autor(QString nome);

    QString GetNome();
    void SetNome(QString nome);
};

#endif // AUTOR_H
