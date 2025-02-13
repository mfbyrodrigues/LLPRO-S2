#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Ler 5 elementos de uma matriz A. Construir uma matriz B de mesmo tamanho observando a lei de formação:
“Todo elemento de A que for ímpar deverá ser multiplicado por 2, caso contrário, o elemento de A fica constante.
*/

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int a[5], b[5], i;
	
	printf ("Digite cinco números: \n");
	
	for (i = 0; i < 5; i++) {
		
		scanf ("%d", &a[i]);
	}
	
	for (i = 0;  i < 5; i++) {
		
		if (a[i] % 2 == 0) {
			
			b[i] = a[i];	
		} 
		
		else {
			
			b[i] = (a[i] * 2);
		}
		
		printf ("%d ", b[i]);
	}
	
	return 0;
}
