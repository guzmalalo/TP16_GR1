#include <stdio.h>
#include <stdlib.h>
void creerTableau(float** ptab,int const n)
{
    *ptab = calloc(n, sizeof(float));
}

void sasirNotes(float* tab, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Note %d = ", i+1);
        scanf("%f", &tab[i]);
    }
}

float moyenne(float* tab, int n)
{
    float sum =0.0f;
    for (int i = 0; i <n; ++i)
    {
        sum +=tab[i];
    }
    return sum/(float)n;
}



int main()
{
    // pointeur/tableau
    float* notes = NULL;
    int n = 0;

    // Input
    printf("Combien des notes ?");
    scanf("%d", &n);

    // creation du tableau
    creerTableau(&notes, n);

    // remplir le tableau
    sasirNotes(notes, n);

    // Affichage moyenne
    printf("La moyenne est : %.2f", moyenne(notes,n));

    // liberation
    free(notes);
    notes = NULL;

    return 0;
}