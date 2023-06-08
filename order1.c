#include <stdio.h>
#include <stdlib.h>

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

    printf("\n");

    for (i=0; i<nbet; i++)
    {
        printf("tab[%d]=%d\n", i, tab[i]);
    }

    printf("\n");
    
 return 0;   
}