#include <stdio.h>
#include <locale.h>

// Faça um programa que mostra os números divisíveis por 5 no intervalo de 1 até 49.

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	int cont = 1;
	
	while (cont <= 49) {
		
		if (cont % 5 == 0) {
			printf ("%d \n", cont);
		}
		
	cont++;
	}

return 0;
}
