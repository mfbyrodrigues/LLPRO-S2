#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Ler 4 elementos para uma matriz A e construir uma matriz B do mesmo tamanho, sendo que B deverá possuir os mesmos elementos de A porém de forma inversa. B[i] <-- A[5-i].

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[4], b[4], i;
	
	printf ("Digite quatro números para A: \n");
	
	for (i = 0; i < 4; i++) {
		
		scanf ("%d", &a[i]);
	}
	
	for (i = 0; i < 4; i++) {
		
		b[i] = 5 - a[i];
		printf ("%d", b[i]);
	}
	
	return 0;
}
