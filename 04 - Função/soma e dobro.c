#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Fazer um programa que solicite ao usuário dois números e apresente na tela o resultado da sua soma e do dobro de cada um deles.
Utilize uma função para calcular a soma e outra para o dobro.
*/

float SomarNumeros (float num1, float num2) { // Função que soma os dois números informados pelo usuário
	
	float ResultadoSoma;
	
	return (num1+num2);
}

float DobroNumeros (float num1) { // Função que calcula o dobro dos dois números informados pelo usuário
	
	float ResultadoDobro;
	
	return (num1*2);
}

int main () { // Função principal

	setlocale (LC_ALL, "Portuguese");
	
	float num1, num2, ResultadoSoma, ResultadoDobro; // Declaração de variáveis
	
	printf ("Digite dois números: \n");
	scanf ("%f %f", &num1, &num2);
	
	ResultadoSoma = SomarNumeros (num1, num2); // Chamada da função SomarNumeros
	printf ("Soma: %.2f \n", ResultadoSoma);
	
	ResultadoDobro = DobroNumeros (num1); // Chamada da função DobroNumeros para executar os comandos apenas usando o primeiro número inserido
	printf ("Dobro dos dois números: %.2f e", ResultadoDobro);
	ResultadoDobro = DobroNumeros (num2); // Chamada da função DobroNumeros para executar os comandods apenas usando o segundo número inserido
	printf(" %.2f", ResultadoDobro);
	
	return 0;
}
