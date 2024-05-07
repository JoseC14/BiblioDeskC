#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void AddWindow(QWidget *window);


private slots:
    void on_btnInicio_clicked();
    void on_btnCadLivro_clicked();

    void on_btnConAcervo_clicked();

    void on_tabWindos_tabCloseRequested(int index);

    void on_btnEmprestar_clicked();

    void on_btnDevolver_clicked();

    void on_btnHistorico_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
