#include <stdio.h>
#include <locale.h>

// Construa um software que mostre a tabuada de adição (soma) do número 2. Obs: A tabuada  de qualquer número vai de 1 a 10, exemplo; 1+2=3 ... 10+2=12.  

int main () { 
	
	setlocale (LC_ALL, "Portuguese");
	
	int n = 0;
	
	printf ("TABUADA DO 2 (ADIÇÃO): \n");
	
	while (n <= 10) {

		printf("%d \n", n + 2);
		
	n++;
	}
	
return 0;
}
