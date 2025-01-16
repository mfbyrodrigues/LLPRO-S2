#include <stdio.h>

// Faça um programa para converter um valor real em dólar. Considere 1 real = 6 dólares.

int main () {

	float real, dolar;

	printf ("Digite o valor em reais: \n");
	scanf ("%f", &real);
	
	dolar = (real*6);
	
	printf ("O novo valor em dólar é de: %.2f \n", dolar);

return 0;
}
