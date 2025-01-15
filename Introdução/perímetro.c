#include <stdio.h>

// Escreva um programa que cálcule o perímetro de um terreno (Considere um quadrilátero).

int main () {

	int perimetro, lados;

	printf ("Digite o tamanho dos lados do terreno: \n");
	scanf ("%d", &lados);
	
	perimetro = (lados*4);
	
	printf ("O perímetro é: %.2d \n", perimetro);

return 0;
}
