#include <stdio.h>
#include <locale.h>

// Elabore um programa que solicite ao usuário 5 números. Se o número for par some com 2,  se for ímpar some com 3.  

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	int cont = 0;
	
	while (cont <= 5) {
		
		printf("Digite um número: \n");
		scanf("%d", &n);
		
		if (n % 2 == 0) {
			n = n + 2;	
			printf ("Seu número é par. Então, somado com dois: %d \n", n);
		}
		else {
			n = n + 3;
			printf ("Seu número é ímpar. Então, somado com três: %d \n", n);
		}
		
	cont++;
	}
	
return 0;
}
