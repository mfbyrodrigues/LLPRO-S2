#include <stdio.h>

// “Calculadora”. Você começou a construir sua própria calculadora. Por isso, você vai começar do básico, com as 4 operações da matemática. Faça um programa que leia 2 números e mostre o resultado de cada operação matemática: soma, subtração, multiplicação e divisão.

int main () {

	float n1, n2, soma, sub, multi, div;

	printf ("CALCULADORA (+, -, *, /) \n");
	printf ("Digite dois números: \n");
	scanf ("%f%f", &n1, &n2);

	soma = (n1+n2);
	sub = (n1-n2);
	multi = (n1*n2);
	div = (n1/n2);

	printf ("Soma: %.2f \n", soma);
	printf ("Subtração: %.2f \n", sub);
	printf ("Multiplicação: %.2f \n", multi);
	printf ("Divisão: %.2f \n", div);

return 0;
}
