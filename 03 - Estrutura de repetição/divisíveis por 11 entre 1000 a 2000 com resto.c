#include <stdio.h>
#include <locale.h>

// Faça um programa que mostre os números entre 1000 e 2000 que, quando divididos por 11, produzam resto.

int main () {

	setlocale (LC_ALL, "Portuguese");
	
	int n = 1000;
	
	while (n <= 2000) {
		
		if (n % 11 != 0) {
			printf ("%d \n", n);	
		}
	
	n++;
	}
	
return 0;
}
