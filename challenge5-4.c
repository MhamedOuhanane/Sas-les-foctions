#include<stdio.h>
int plus_petit(int i,int j);
int main()
{
    int a,b;
    printf("Saisir la 1er nombre : ");
    scanf("%d",&a);
    printf("Saisir la 2er nombre : ");
    scanf("%d",&b);
    printf("Le plus petit des deux entiers %d et %d est : pp = %d",a,b,plus_petit(a,b));    
    return 0;
}
int plus_petit(int i,int j)
{
    if (i >= j)
        return j;
    else
        return i;
}