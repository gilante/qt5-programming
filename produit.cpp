#include "produit.h"
#include <stdio.h>



int insertProduit(Produit p)
{
    FILE *fd = fopen(FILE_PROD,"a");
    int r = fprintf(fd,"%s\t%s\t%d\t%d\n",p.code,p.libelle,p.qte,p.prix);
    fclose(fd);
    return r;
}
