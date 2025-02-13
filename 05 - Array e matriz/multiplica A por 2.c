#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Ler 5 elementos de uma matriz A. Construir uma matriz B do mesmo tamanho que A multiplicando os elementos de A por 2. No final mostre a matriz B.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[5], b[5], i;
	
	printf ("Digite cinco números: \n");
	
	for (i = 0; i < 5; i++) {
		
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < 5; i++){
		
		b[cont] = (a[i] * 2);
		
		printf ("%d ", b[i]);
	}
	
	return 0;
}
