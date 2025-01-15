#include <stdio.h>

/* Se um minuto tem 60 segundos, quantos segundos existem em X minutos?
Escreva um programa que receba a quantidade de minutos e imprima quantos segundos existem.
*/

int main () {

	float min, convseg;

	printf ("Digite os minutos: \n");
	scanf ("%f", &min);
  
	convseg = (min*60);
  
	printf ("Conversão para segundos: %.2f \n", convseg);

return 0;
}
