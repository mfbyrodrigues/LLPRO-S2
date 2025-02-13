#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Leia uma matriz A com 3 elementos e uma matriz B com 5. Construa uma matriz C, sendo que C deverá ser a junção de A mais B e deverá conter 8 elementos.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[3], b[5], c[6], i;
	
	printf ("Digite três números para A: \n");
	
	for (i = 0; i < 3; i++) {
		
		scanf ("%d", &a[i]);
	}
	
	printf ("Digite cinco números para B: \n");
	
	for (i = 0; i < 5; i++) {
		
		scanf ("%d", &b[i]);
	}
	
	for (i = 0; i < 3; i++) {
		
		c[i] = a[i];
	}
	
	for (i = 0; i < 5; i++) {
		
		c[i + 3] = b[i];
	}
	
	for (i = 0; i < 8; i++) {
	 
		printf ("%d ", c[i]);
	}
	
	return 0;
}
