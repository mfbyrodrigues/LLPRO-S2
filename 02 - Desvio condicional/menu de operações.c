#include <stdio.h>
#include <math.h>

/* Faça um algoritmo que dê um menu de opções acerca das quatro opereções básicas da matemática, e depois peça que insira dois números quaisquer.
Assim, conforme a escolha no menu, possa operar e mostrar a operação desejada.
*/

int main () {
	
	float soma, sub, mult, div;
	float n1, n2;
	int opcao;
	
	printf ("Escolha uma das opções: \n");
	printf ("[1] - SOMA (+) \n");
	printf ("[2] - SUBTRAÇÃO (-) \n");
	printf ("[3] - MULTIPLICAÇÃO (*) \n");
	printf ("[4] - DIVISÃO (/) \n");	
	scanf ("%d", &opcao);
	
	printf ("Insira dois números quaisquer para obter um resultado: \n");
	scanf ("%f%f", &n1, &n2);
	
	switch (opcao) {
		case 1:
			soma = (n1+n2);
			printf ("O resultado da soma é: %2.2f \n", soma);
		break;
		
		case 2:
			sub = (n1-n2);
			printf ("O resultado da subtração é: %2.2f \n", sub);
		break;	
		
		case 3:
			mult = (n1*n2);
			printf ("O resultado da multiplicação é: %2.2f \n", mult);
		break;
		
		case 4:
			div = (n1/n2);
			printf ("O resultado da divisão é: %2.2f \n", div);
		break;
	
		default:
			printf ("O resultado é inválido. %f \n");			
		}

return 0;
} 
