#include "mafenetre.h"
#include "ui_mafenetre.h"
#include <QMessageBox>
#include "produit.h"
#include <string.h>

MaFenetre::MaFenetre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MaFenetre)
{
    ui->setupUi(this);

}

MaFenetre::~MaFenetre()
{
    delete ui;
}


void MaFenetre::on_btnCalculer_clicked()
{
    Produit p;
    strcpy(p.code,ui->editCode->text().toLatin1());
    strcpy(p.libelle,ui->editLibelle->text().toLatin1());
    p.qte = ui->editQte->text().toInt();
    p.prix = ui->editPrix->text().toInt();

    int ret = insertProduit(p);
    if(ret > 0)
        statusBar()->showMessage("Calcul effectué avec succès",3000);
}

void MaFenetre::on_btn_annuler_clicked()
{
    ui->editQte->setText("");
    ui->editPrix->clear();
    ui->lblResultat->setText("Resultat");
}

void MaFenetre::on_btnFermer_clicked()
{
    int r = QMessageBox::question(this,"Confirmation",
             "Voulez-vous vraiment sortir?",
              QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
    if(r == QMessageBox::Yes)
        close();
    return;
}

void MaFenetre::on_actionQuitter_triggered()
{
    int r = QMessageBox::question(this,"Confirmation",
             "Voulez-vous vraiment sortir?",
              QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
    if(r == QMessageBox::Yes)
        close();
    return;
}
