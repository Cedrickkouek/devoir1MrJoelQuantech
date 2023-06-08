#include <stdio.h>
#include <stdlib.h>

void trier(int x, int *tab);

int main(void)
{
    int *tab;
    int nbet, i, j;
    int temp;
    
    printf("Combien de nombre voulez vous en registrer ? : \n");
    scanf("%d", &nbet);

    tab = (int *)malloc(nbet*sizeof(int));

    for (i=0; i<nbet; i++)
    {
        printf("Enter le nombre n° %d\n", i+1);
        scanf("%d", &tab[i]);
    }

    trier(nbet, tab); /* Ici j'appelle la fonction et je lui passe des arguments*/

    printf("\n");

    for (i=0; i<nbet; i++)
    {
        printf("tab[%d]=%d\n", i, tab[i]);
    }

    printf("\n");
    
 return 0;   
}

/* La fonction qui permet de trier les element d'un tableau*/
void trier(int nbet, int *tab)
{
    int i, j, temp;

    for(i=0; i<nbet; ++i)
    {
        for(j=i+1; j<nbet; ++j)
        {
            if(tab[i] > tab[j])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}