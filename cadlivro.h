#ifndef CADLIVRO_H
#define CADLIVRO_H

#include <QWidget>

namespace Ui {
class CadLivro;
}

class CadLivro : public QWidget
{
    Q_OBJECT

public:
    explicit CadLivro(QWidget *parent = nullptr);
    ~CadLivro();

    QString InputItem();
    void CadItem(QString item, QString type);

private slots:
    void on_btnCadEditora_clicked();

    void on_btnCadAutor_clicked();

private:
    Ui::CadLivro *ui;
};

#endif // CADLIVRO_H
