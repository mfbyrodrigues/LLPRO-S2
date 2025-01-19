#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/*
Escreva uma função que calcule e retorne a distância entre dois pontos ( x1, y1) e (x2,
y2). O programa solicita ao usuário que digite os quatro pontos de referência, pontos (
x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo float. Nessa
questão siga os passos:

2.1 coloque a biblioteca #include <math.h>
2.2 a distância entre dois pontos será:
a = Px1 - Px2; b = Py1 - Py2; c = a * a + b * b; d = sqrt(c);
2.3 a resposta do retorno será a variável d.
*/

float DistanciaEntrePontos (float x1, float y1, float x2, float y2) {
	
	float a, b, c, d;
	
	a = (x1-x2);
	b = (y1-y2);
	c = ((a * a) + (b*b));
	d = sqrt (c);
	
	return d;
	
}

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	float x1, y1, x2, y2, resultado;
	
	printf ("Digite quatro pontos de referência: \n");
	scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);
	
	resultado = DistanciaEntrePontos (x1, y1, x2, y2); // Chamada da função
	
	printf ("A distância entre os pontos é de: %.2f \n", resultado);
	
	return 0;
}
