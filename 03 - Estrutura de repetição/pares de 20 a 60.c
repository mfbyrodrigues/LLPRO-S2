#include <stdio.h>
#include <locale.h>

// Elabore um programa que mostre todos os números pares situados na faixa de 20 a 60.  

int main () {

	setlocale (LC_ALL, "Portuguese");

	int n = 20;

	while (n <= 60) {

		if (n % 2 == 0) {
  			printf ("%d \n", n);
		}
		
	n++; 
	
	}
	
return 0;
}	
