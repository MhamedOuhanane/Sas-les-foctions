#include<stdio.h>

int fibo(int a);

int main()
{
    int n;
    do
    {
        printf("Entrer un entier positive : ");
        scanf("%d",&n);
    } while (n<0);
    printf("Le %dieme terme de la suite de Fibonacci est F = %d",n,fibo(n));
    return 0;
}

int fibo(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return fibo(a-2)+fibo(a-1);
    
}