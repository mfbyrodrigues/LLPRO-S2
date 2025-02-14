#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Ler uma matriz A de 5 elementos. Construa uma matriz B de mesmo tamanho, sendo que cada elemento de B deverá ser metade de cada elemento de A.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	float a[5], b[5];
	int i;
	
	printf ("Digite cinco números: \n");
	
	for (i = 0; i < 5; i++) {
		
		scanf ("%f", &a[i]);
	}
	
	for (i = 0; i < 5; i++) {
		
		b[i] = (a[i] / 2);
		
		printf ("%.2f", b[i]);
	}
	
	return 0;
}
