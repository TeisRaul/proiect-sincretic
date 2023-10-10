#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void hanoi(int n, int a, int b, int c)
{
   if(n<1)
      printf("Nu exista discuri\n");
    else
        if(n == 1)
        printf("Se excuta o mutare de pe tija A pe tija C\n");
}

void mutari(int n)
{
    int i, putere=1;
    for(i=0;i<n;i++)
       putere *=2;
    printf("Numarul de mutari minim este %d\n", putere);
}

int main()
{
    int n,a,b,c,i;
    printf("Introduceti numarul de discuri: ");
    scanf("%d", &n);
    mutari(&n);
}