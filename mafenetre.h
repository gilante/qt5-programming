#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QMainWindow>

namespace Ui {
class MaFenetre;
}

class MaFenetre : public QMainWindow
{
    Q_OBJECT

public:
    explicit MaFenetre(QWidget *parent = 0);
    ~MaFenetre();



private slots:
    void on_btnCalculer_clicked();

    void on_btn_annuler_clicked();

    void on_btnFermer_clicked();

    void on_actionQuitter_triggered();

private:
    Ui::MaFenetre *ui;
};

#endif // MAFENETRE_H
