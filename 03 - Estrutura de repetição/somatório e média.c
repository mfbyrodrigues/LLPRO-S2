#include <stdio.h>
#include <locale.h>

// Construa um programa que solicite ao usuário 4 números e no final mostre o somatório dos números e a média de todos eles. 

int main () {
	 
	setlocale (LC_ALL, "Portuguese");
	
	float n, soma = 0, media;
	int cont = 1;
	
	while (cont <= 4) {

		printf ("Insira um número: \n");
		scanf ("%f", &n);

		soma = soma + n;
		media = soma/4;
		
	cont++;
	}

	printf ("O somatório dos números: %.2f \n", soma);
	printf ("A média de todos eles: %.2f \n", media);

return 0;
}
