#include<stdio.h>
#include<stdlib.h>

int* allouerTableauEntiersV1(int const taille)
{
  int *t = (int*)calloc(taille, sizeof(int));
  return t;
}

void allouerTableauEntiersV2(int** pTab, int const taille)
{
  *pTab = (int*)calloc(taille, sizeof(int));
}

void allouerTableauEntiersV3(int** pTab, int* ptaille)
{
  printf("Donnez la taille du tablaeu");
  scanf("%d", ptaille);
  *pTab = (int*)calloc(*ptaille, sizeof(int));
}

void afficherTab(int* tab, int const taille)
{
  if (tab!= NULL)
  {
    for (int i = 0; i < taille; ++i)
    {
      printf("%d ", tab[i]);
    }
    printf("\n");
  }
}


int main()
{
  int taille = 10;
  int* tab = NULL;

  // test de la version 1
  tab =  allouerTableauEntiersV1(taille);
  afficherTab(tab, taille);
  free(tab);
  tab = NULL;

  // test de la version 2
  allouerTableauEntiersV2(&tab,taille);
  afficherTab(tab, 15);
  free(tab);
  tab = NULL;

  // test de la version 3
  allouerTableauEntiersV3(&tab,&taille);
  afficherTab(tab, taille);
  free(tab);
  tab = NULL;


  return 0;

}
