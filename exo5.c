#include <stdio.h>
#include <stdlib.h> // calloc, malloc, realloc
#include<time.h>


int ** creerMatrice(int * pnbL, int* pnbC)
{
    int** mat = NULL;
    printf("Nombre de lignes?");
    scanf("%d", pnbL);
    printf("Nombre de colonnes?");
    scanf("%d", pnbC);
    mat = calloc(*pnbL, sizeof(int*));

    for (int i=0; i< *pnbL; i++)
    {
        mat[i] = calloc(*pnbC,sizeof(int));
    }
    return mat;
}

void  creerMatriceP(int*** pmat,  int * pnbL, int* pnbC)
{
    printf("Nombre de lignes?");
    scanf("%d", pnbL);
    printf("Nombre de colonnes?");
    scanf("%d", pnbC);
    *pmat = calloc(*pnbL, sizeof(int*));

    for (int i=0; i< *pnbL; i++)
    {
        (*pmat)[i] = calloc(*pnbC,sizeof(int));
    }

}

void matriceAleatoire(int ** tab, int nbL, int nbC)
{
    for (int i = 0; i < nbL; ++i)
    {
        for (int j = 0; j < nbC; ++j)
        {
         tab[i][j] =rand()%256;
        }
    }
}


void libererMatrice(int ** mat, int nbL)
{
    for (int i = 0; i < nbL; ++i)
    {
        free(mat[i]);
        mat[i] = NULL;
    }
    free(mat);
}

void afficherMatrice(int **tab, int nbL, int nbC)
{
    for (int i = 0; i < nbL; ++i)
    {
        for (int j = 0; j < nbC; ++j)
        {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }

}



int main()
{
    // initiaisation du rand
    srand(time(NULL));
    int ** tab = NULL;
    int nbL =2;
    int nbC =2;

    int * p = &nbC;

    int *** pm = &tab;

    // allocation de la matrice
    //tab = creerMatrice(&nbL, &nbC);
    creerMatriceP(, &nbL, &nbC);
    matriceAleatoire(tab, nbL, nbC);
    // affichage
    afficherMatrice(tab, nbL, nbC);

    // free
    libererMatrice(tab, nbL);
    tab =NULL;

}
