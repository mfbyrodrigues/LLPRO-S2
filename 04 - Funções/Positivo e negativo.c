#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Crie um programa em C que receba um número inteiro e uma função que retorne 1, se o número digitado for positivo ou retorne zero, se o número for negativo.

int PositivoNegativo (int num) { // Cabeçalho da função: tipo de returno, identificador e passagem de parâmetros
	
	if (num > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main () { // Função principal do programa

	setlocale (LC_ALL, "Portuguese");

	int num, retorno; // Declaração de variáveis
	
	printf ("Digite um número: \n");
	scanf ("%d", &num);
		
	retorno = PositivoNegativo (num); // Chamada da função
	
	if (retorno > 0) {
		printf ("O número informado é positivo. \n");
	}
	else {
		printf ("O número informado é negativo. \n");
	}
	
	return 0;
}
