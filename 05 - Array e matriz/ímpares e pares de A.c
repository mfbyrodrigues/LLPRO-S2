#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Ler uma matriz A com 8 posições. Ao final mostre quantos valores são pares e quantos valores ímpares foram digitados.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[8], i, par = 0, impar = 0;
	
	printf ("Digite oito números para A: \n");
	
	for (i = 0; i < 8; i++) {
		
		scanf ("%d", &a[i]);
		
		if (a[i] % 2 == 0) {
			
			par++;
		}
		
		else {
			
			impar++;
		}
	}
	
	printf ("Números pares: %d \n", par);
	
	printf ("Números impares: %d \n", impar);
	
	return 0;
}
