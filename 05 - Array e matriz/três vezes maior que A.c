#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Construa uma matriz A com 4 elementos. Construa uma matriz B do mesmo tipo, observando a lei de formação: “Todo elemento de B deverá ser 3 vezes maior que o seu correspondente em A”.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[4], b[4], i;
	
	printf ("Digite quatro núneros para A: \n");
	
	for (i = 0; i < 4; i++) {
		
		scanf ("%d", &a[i]);
	}
	
	for (i = 0;  i < 4; i++) {
		
		b[i] = (a[i] * 3);
		printf ("%d", b[i]);
	}
	
	return 0;
}
