#ifndef EMPLIVRO_H
#define EMPLIVRO_H

#include <QWidget>

namespace Ui {
class EmpLivro;
}

class EmpLivro : public QWidget
{
    Q_OBJECT

public:
    explicit EmpLivro(QWidget *parent = nullptr);
    ~EmpLivro();

private:
    Ui::EmpLivro *ui;
};

#endif // EMPLIVRO_H
