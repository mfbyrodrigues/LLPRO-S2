#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Ler 6 elementos para matriz A e B. Construir uma matriz C e D de mesmo tamanho,
sendo que C deverá ser formada pelos elementos de índice ímpar das matrizes A e B e a
matriz D deverá ser formada pelos elementos de índice par das matrizes A e B.
*/

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[6], b[6], c[6], d[6], i;
	
	printf ("Digite seis números para A: \n");
	
	for (i = 0; i < 6; i++) {
		
		scanf ("%d", &a[i]);
	}
	
	printf ("Digite seis números para B: \n");
	
	for (i = 0; i < 6; i++) {
		
		scanf ("%d", &b[i]);
	}
	
	for (i = 0; i < 6; i++) {
		
		if (i % 2 == 0) {
			
			d[i] = a[i];
			c[i] = b[i];  
		}
		
		else {
			
			c[i] = a[i];
			d[i] = b[i];
		}
	}

	printf ("[C]: ");
	
	for (i = 0; i < 6; i++) {
	
		printf ("%d", c[i]);
	}
	
	printf (" \n");
	
	printf ("[D]: ");
	
	for (i = 0; i < 6; i++) {
	
		printf ("%d", d[i]);
	}
	
	return 0;
}
