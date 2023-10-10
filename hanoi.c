#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void muta_Disc(int n, char a, char c)
{
	printf("Muta discul %d de la %c catre %c\n", n, a, c);
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 0)
		printf("Nu exista discuri\n");
	if (n == 1)
	{
		muta_Disc(1, a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		muta_Disc(n, a, c);
		hanoi(n - 1, b, a, c);
	}
}

void mutari(int n)
{
	int i, putere = 1;
	for (i = 0; i < n; i++)
		putere *= 2;
	putere--;
	printf("Numarul de mutari minim este %d\n", putere);
}

int main()
{
	int n;
	char a, b, c;
	a = 'A';
	b = 'B';
	c = 'C';
	printf("Introduceti numarul de discuri: ");
	scanf("%d", &n);
	mutari(n);
	hanoi(n, a, b, c);
	return 0;
}