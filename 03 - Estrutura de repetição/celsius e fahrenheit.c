#include <stdio.h>
#include <locale.h>

/*
Faça um programa que calcule e mostre valores de graus Celsius e graus Fahrenheit, cujos graus variem de 40 a 70 de 1 em 1.
A conversão de graus Fahrenheit (F) para graus Celsius (C) é dada por: 5/9 * (F-32);
A conversão de graus Celsius (C) para graus Fahrenheit (F) é dada por: (9/5*C)+32.
*/

int main () {

	setlocale (LC_ALL, "Portuguese");
	
	int graus = 40;
	float fahrenheit, celsius;
	
	while (graus <= 70) {
		
		fahrenheit = (9.0/5.0*graus)+32; // Coloquei o número inteiro como n.0 porque se fosse fazer a divisão inteiro/inteiro, o resultado seria truncado. E fazendo isso, o resultado será decimal.
		printf ("Fahrenheit: %.0f \n", fahrenheit);	
		
		celsius = 5.0/9.0 * (fahrenheit-32); // Coloquei o número inteiro como n.0 porque se fosse fazer a divisão inteiro/inteiro, o resultado seria truncado. E fazendo isso, o resultado será decimal.
		printf ("Celsius: %.0f \n", celsius);
		
	graus++;
	}
	
return 0;
}
