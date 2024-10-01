#include<stdio.h>
int plus_grand(int i,int j);
int main()
{
    int a,b;
    printf("Saisir la 1er nombre : ");
    scanf("%d",&a);
    printf("Saisir la 2er nombre : ");
    scanf("%d",&b);
    printf("Le plus grand de %d et %d est : pg = %d",a,b,plus_grand(a,b));    
    return 0;
}
int plus_grand(int i,int j)
{
    if (i <= j)
        return j;
    else
        return i;
}