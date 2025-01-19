#include <stdio.h>
#include <locale.h>

// Construa um programa que pergunte quatro números ao usuário e calcule a média dos números. O programa irá parar quando o usuário desejar.

int main () {
	
	setlocale (LC_ALL, "Portuguese");

	int resp = 1;
	float num1, num2, num3, num4, media;
	
	while (resp == 1) {
		
		printf ("Digite quatro números: \n");
		scanf ("%f%f%f%f", &num1, &num2, &num3, &num4);
		
		media = (num1+num2+num3+num4) / 4;
		
		printf ("Digite 1 para continuar e 0 para sair: \n");
		scanf ("%d", &resp);
	}
    
    printf ("A média é: %.2f \n", media);
    
return 0;
}
