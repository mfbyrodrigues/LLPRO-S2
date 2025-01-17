#include <stdio.h>
#include <locale.h>

// Faça um programa que determine e mostre os 4 primeiros divisíveis de 3, considerando números inteiros positivos.    

int main () { 
	
	setlocale (LC_ALL, "Portuguese");
	
	int n = 1;
	
	while (n <= 12) {

		if (n % 3 == 0) {
			printf ("%d \n", n);
		}
		
	n++;
	}
	
return 0;
}
