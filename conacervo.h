#ifndef CONACERVO_H
#define CONACERVO_H

#include <QWidget>

namespace Ui {
class ConAcervo;
}

class ConAcervo : public QWidget
{
    Q_OBJECT

public:
    explicit ConAcervo(QWidget *parent = nullptr);
    ~ConAcervo();

private:
    Ui::ConAcervo *ui;
};

#endif // CONACERVO_H
