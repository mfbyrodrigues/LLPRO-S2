#include <stdio.h>
#include <locale.h>

// Faça um programa para contar quantos livros uma pessoa está comprando em uma livraria. O programa só deve parar quando o usuário digitar 0.

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	int quantL, totalL = 0;
	
	printf ("Digite a quantidade comprada de livros ou digite 0 para sair: \n");
	scanf ("%d", &quantL);
	
	while (quantL != 0) {
		
		totalL = totalL + quantL;
		
		printf ("Digite a quantidade comprada de livros ou digite 0 para sair: \n");
		scanf ("%d", &quantL);
	}
	
	printf ("Total de livros comprados: %d \n", totalL);

return 0;
}
