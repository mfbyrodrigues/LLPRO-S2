#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Ler duas matrizes A e B com 5 elementos cada. Construir uma matriz C que apresente o valor da subtração dos elementos de A por B.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[5], b[5], c[5], i;
	
	printf ("Digite cinco valores para A: \n");
	
	for (i = 0; i < 5; i++) {
		
		scanf ("%d", &a[i]);
	}
	
	printf ("Digite cinco valores para B: \n");
	
	for (i = 0; i < 5; i++) {
		
		scanf ("%d", &b[i]);
	}
	
	for (i = 0; i < 5; i++) {
		
		c[i] = a[i] - b[i];
		
		printf ("%d ", c[i]);
	}
	
	return 0;
}
