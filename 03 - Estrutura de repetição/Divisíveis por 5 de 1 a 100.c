#include <stdio.h>
#include <locale.h>

// Construa um programa que mostre os números divisíveis por 5 e que estejam na faixa de 1 a  100.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int n = 1;
	
	while (n <= 100) {
		
		if (n % 5 == 0) {
			printf("%d \n", n);
		}
		
	n++;
	}
	
return 0;
}
