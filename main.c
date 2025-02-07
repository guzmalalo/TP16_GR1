#include<stdio.h>
#include<stdlib.h>

int* allouerTableauEntiersV1(int const taille)
{
  int *t = malloc(sizeof(int)*taille);
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


}
