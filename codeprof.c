#include <stdio.h>
#include <stdlib.h>

void appeller(int a, int b, int c);
void classer(int *a, int *b, int *c);

int main()
{
    appeller(a, b, c);
    classer(&a, &b, &c);
    
    return 0;
}
void appeller(int a, int b, int c)
{
    printf("Veuillez entrer les 3 valeurs:  \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Voici les valeurs entrées au clavier:  \n");
    printf("%d, %d, %d", a, b, c);
    printf("voici les nombres classer en ordre decroissant: \n");
}

void classer(int *a, int *b, int*c)
{
    if(a>=b && b>=c ||a>=c && c>=b)
    {
        if(b>=c)
        {
            printf("%d, %d, %d", *a, *b, *c);
        }
        else
        {
            printf("%d, %d, %d", *a, *c, *b);
        }
    }
    else if(b>=a && a>=c || b>=c && c>=a)
    {
        if(a>=c)
        {
            printf("%d, %d, %d", *b, *a, *c);
        }
        else
        {
            printf("%d, %d, %d", *b, *c, *a);
        }
    }
    else
    {
        if(a>=b)
        {
            printf("%d, %d, %d", *c, *a, *b);
        }

        else
        {
            printf("%d, %d, %d", *c, *b, *a);
        }
    }

}

