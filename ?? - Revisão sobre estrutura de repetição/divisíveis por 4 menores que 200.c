#include <stdio.h>
#include <locale.h>

// Apresente os números divisíveis por 4 que sejam menores que 200.

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	for (int n = 1; n < 200; n++) {
		
		if (n % 4 == 0) {
			
			printf ("%d \n", n);
		}
	}
	
	return 0;
}
