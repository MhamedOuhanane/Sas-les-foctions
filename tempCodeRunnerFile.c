#include<stdio.h>
int Somme(int x,int y);
int main()
{
    int a,b;
    printf("Saisir la 1er nombre : ");
    scanf("%d",&a);
    printf("Saisir la 2er nombre : ");
    scanf("%d",&b);
    printf("La somme de %d et %d est s = %d",Somme(a,b));    
    return 0;
}
int Somme(int x,int y)
{
    return x+y;
}