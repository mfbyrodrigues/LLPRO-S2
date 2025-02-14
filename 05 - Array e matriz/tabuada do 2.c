#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Elabore e efetue o cálculo de uma tabuada de um número qualquer e armazene os resultados em uma matriz A com tamanho para 10 elementos.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[10], i;
	
	printf ("Tabuada do 2: \n");
	printf (" \n");
	
	for (i = 1; i <= 10; i++) {
		
		a[i - 1]	= 2 * i;
		printf ("%d ", a[i - 1]);
	}
	
	return 0;
}
