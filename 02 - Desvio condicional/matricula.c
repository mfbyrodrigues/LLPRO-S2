#include <stdio.h>

/* 
Faça um programa para o IFCE Cedro. O programa mostra qual opção de curso integrado você deseja se matricular em 2025. 
OBS:
1 - Informática;
2 - Eletrotécnica;
3 - Mecânica.
*/

int main () {
	
	int opcao;
	
	printf ("Em qual curso você deseja se matricular? \n");
	printf ("[1] - Infotmática; \n");
	printf ("[2] - Eletrotécnica; \n");
	printf ("[3] - Mecânica. \n");
	scanf ("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf ("Pronto! Você está matriculado no curso de informática. \n");
		break;
		
		case 2:
			printf ("Pronto! Você está matriculado no curso de eletrotécnica. \n");
		break;
		
		case 3:
			printf ("Pronto! Você está matriculado no curso de mecânica. \n");
		break;	

		default:
			printf ("Ops... Opção inválida! Você não está matriculado em nenhum curso. \n");
	}
	
return 0;
}
