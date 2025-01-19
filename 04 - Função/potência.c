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
		
		return 404;
	}
}

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int resultado, base, expoente;
	
	printf ("Número para base: \n");
	scanf ("%d", &base);
	printf ("Número para expoente: \n");
	scanf ("%d", &expoente);
	
	if (resultado == 404) {
		
		printf ("Error 404. Tente, para o expoente, um número inteiro maior ou igual a 1! \n");
	}
	else {
		
		resultado = Potencia (base, expoente);
		printf ("O resultado dessa potência é: %d \n", resultado);	
	}

	return 0;
}
