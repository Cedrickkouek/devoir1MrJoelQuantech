#include <stdio.h>

int main(void)
{
    int tab[3];
    int temp=0;
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter le nombre n° %d\n", i+1);
        scanf("%d", &tab[i]);
    }

    for(int i=0; i<3; i++)
    {
        if(tab[i]>tab[i+1])
        {
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%ls\n", &tab[i]);
    }

    printf("\n");
    
 return 0;   
}