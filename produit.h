#ifndef PRODUIT_H
#define PRODUIT_H

#define FILE_PROD "produit.dat"

struct produit
{
    char code[10];
    char libelle[30];
    int qte;
    int prix;
};
typedef struct produit Produit;


int insertProduit(Produit p);
Produit* getProduit(char *code);
Produit* getAllProduits();
int updateProduit(Produit p);
int deleteProduit(char *code);


#endif // PRODUIT_H
