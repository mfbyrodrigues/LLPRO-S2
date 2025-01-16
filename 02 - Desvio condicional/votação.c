#include <stdio.h>

// Faça um programa que o usuário escolha no candidato que irá votar (Fulano e ciclano) e depois confirme esse voto para ele.

int main () {
	
	int opcao;

	printf ("Em quem você deseja votar? \n");
	printf ("[1] - Fulano; \n");
	printf ("[2] - Ciclano. 2 \n");
	scanf ("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf ("A sua escolha foi o Fulano (Candidato 1)! \n");
		break;
			
		case 2: 
			printf ("A sua escolha foi o Ciclano (Candidato 2)! \n");
		break;
		
		default:
			printf ("Opção inválida! \n");
	}

return 0;
}
