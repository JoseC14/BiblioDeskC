#ifndef DEVLIVRO_H
#define DEVLIVRO_H

#include <QWidget>

namespace Ui {
class DevLivro;
}

class DevLivro : public QWidget
{
    Q_OBJECT

public:
    explicit DevLivro(QWidget *parent = nullptr);
    ~DevLivro();

private:
    Ui::DevLivro *ui;
};

#endif // DEVLIVRO_H
