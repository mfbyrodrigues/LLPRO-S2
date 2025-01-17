#include <stdio.h>
#include <locale.h>

// Faça um programa para mostrar a tabuada do 3 (Multiplicação).

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	int cont = 0, multi;
	
	while (cont <= 10) {
		
		multi = cont * 3;
		printf ("%d \n", multi);
		
	cont++;
	}
    
return 0;
}
