#include<stdio.h>
#include<stdbool.h>

bool Parite(int a);

int main()
{
    int n;
    do
    {
        printf("Saisir un entier positif : ");
        scanf("%d",&n);
        if (Parite(n))
            printf("L'entier %d est pair.",n);
        else
            printf("L'entier %d est impair.",n);
        
    } while (n < 0);
    
    return 0;
}

bool Parite(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}