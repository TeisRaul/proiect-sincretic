#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void hanoi(int n, char a, char b, char c)
{
   a="A";
   b="B";
   c="C";
   if(n<1)
      printf("Nu exista discuri\n");
    else
        if(n == 1)
        printf("Se excuta o mutare de pe tija %c pe tija %c\n", a, c);
}

void mutari(int n)
{
    int i, putere=1;
    for(i=0;i<n;i++)
       putere *=2;
    putere--;
    printf("Numarul de mutari minim este %d\n", putere);
}

int main()
{
    int n,i;
    char a,b,c;
    a="A";
    b="B";
    c="C";
    printf("Introduceti numarul de discuri: ");
    scanf("%d", &n);
    mutari(n);
	hanoi(n, a, b, c);
}