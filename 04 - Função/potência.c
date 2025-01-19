#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/*
Escreva uma função potência (base, expoente) que, quando chamada, retorna
base expoente. Por exemplo, potência (3, 4) deve retornar 81. Assuma que expoente é
um inteiro maior ou igual a 1.
*/

int Potencia (int base, int expoente) {
	
	int resultado;
	
	if (expoente >= 1) {
		
		resultado = pow (base, expoente);	
	}
	else {
		
		return -1;
	}
}

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int base, expoente, resultado;
	
	printf ("Número para base: \n");
	scanf ("%d", &base);
	
	printf ("Número para expoente: \n");
	scanf ("%d", &expoente);
	
	resultado = Potencia (base, expoente);
	
	if (resultado == -1) {
		
		printf ("Ops... Tente, para o expoente, um número inteiro maior ou igual a 1! \n");
	}
	else {
		
		printf ("O resultado dessa potênciação é: %d \n", resultado);	
	}

	return 0;
}
