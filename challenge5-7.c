#include<stdio.h>

void inverse(char A[]);
int len(char A[]);
void clearBuffer();
int main()
{
    char nom[20];
    printf("Saisir un chaine de caractere : ");
    scanf("%s",nom);
    clearBuffer();
    inverse(nom);
    return 0;
}
void inverse(char A[])
{
    int i;
    char c;
    for ( i = 0; i <= len(A)/2; i++)
    {
        c = A[i];
        A[i] = A[len(A)-1-i];
        A[len(A)-1-i] = c;
    }
    printf("l'inverce est %s",A);
}
int len(char A[])
{
    int i;
    for ( i = 0; i < 20; i++)
    {
        {
            if (A[i] == 0)
            {
                break;
            }
        }
    }
    return i;
}
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
