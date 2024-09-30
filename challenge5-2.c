#include<stdio.h>
int Produit(int x,int y);
int main()
{
    int a,b;
    printf("Saisir la 1er nombre : ");
    scanf("%d",&a);
    printf("Saisir la 2er nombre : ");
    scanf("%d",&b);
    printf("Le produit de %d et %d est : p = %d",a,b,Produit(a,b));    
    return 0;
}
int Produit(int x,int y)
{
    return x*y;
}