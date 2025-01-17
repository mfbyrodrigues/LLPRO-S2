#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Escreva uma função que receba dois números inteiros retorne o menor número.

int MenorNumero (int n1, int n2) { // Cabeçalho da função: tipo de função, identificador e passagem de parâmetro

	int resultado; // Declaração de variáveis
	
	if (n1 < n2) {
		return n1;	
	}
	else {
		return n2;
	}
}

int main () { // Função principal do programa

	setlocale (LC, "Portuguese");
	
	int n1, n2, resultado; // Declaração de variáveis
	
	printf ("Digite dois números: \n");
	scanf ("%d%d", &n1, &n2);
	
	resultado = MenorNumero (n1, n2); // Chamada da função
	
	printf ("O menor número é: %d \n", resultado);
	
	return 0;
}
