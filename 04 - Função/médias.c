#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* 
Elabore uma função que receba três notas de um aluno como parâmetro e uma letra. Se a
letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a letra for
‘P’, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada para
o programa principal.
*/

float Medias (float n1, float n2, float n3, char letra) {
	
	if (letra == 'A') {
		
		return ((n1+n2+n3)/3); // Média aritmética
	}
	else if (letra == 'P') {
		
		return (((n1*5)+(n2*3)+(n3*2))/10); // Média ponderada
	}
	else {
		
		return -1; // Parte de erro
	}
}

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	float n1, n2, n3, resultado;
	char letra;
	
	printf ("Insira três notas para uma média: \n");
	scanf ("%f %f %f", &n1, &n2, &n3);
	
	printf ("Agora, insira uma letra para um tipo (A -> Aritmética e P -> Ponderada). \n");
	getchar ();
	scanf ("%c", &letra);
	
	resultado = Medias (n1, n2, n3, letra); // Chamada da função
	
	if (resultado == -1) {
		
		printf ("Ops... Letra inserida errada. Apenas A ou P. \n");
	}
	else if (letra == 'A') {
		
		printf ("Média aritmética: %.2f \n", resultado);
	}
	else if (letra == 'P') {
		
		printf ("Média ponderada: %.2f \n", resultado);
	}
	
	return 0;	
}
