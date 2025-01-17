#include <stdio.h>
#include <locale.h>

/*
Elabre um programa que apresente como resultado o valor fatorial dos números ímpares situados na faixa númerica de 1 à 10.
OBS: fatorial é uma multiplicação de número de forma decrescente.
Exemplo: 3! = 3 * 2 * 1 = 6.
*/

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int cont1, cont2, fat;
	
	for (cont1 = 1; cont1 <= 10; cont1++) {
		
		if (cont1 % 2 != 0) {
			
			fat = 1;
			
			for (cont2 = 1; cont2 <= cont1; cont2++) {
	
				fat = fat * cont2;
			}
	
			printf ("O fatorial é: %d \n", fat);
		}
	}
	
	return 0;
}
