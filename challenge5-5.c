#include<stdio.h>

int fact(int a);

int main()
{
    int n;
    do
    {
        printf("Entrer un entier positive : ");
        scanf("%d",&n);
    } while (n<0);
    printf("Le factoeielle de %d est n! = %d",n,fact(n));
    return 0;
}

int fact(int a)
{
    if (a == 0 || a == 1)
        return a;
    else
        return a*fact(a-1);
    
}
