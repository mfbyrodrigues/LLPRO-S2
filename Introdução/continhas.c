#include <stdio.h>
#include <math.h>

/* Um homem trabalhava em uma empresa cuja missão era fazer cálculos de trajetória de foguete. A função dele era receber as fórmulas e os valores para efetuar os cálculos. Faça um programa que leia as variáveis (a, b e c) e imprima a resposta das fórmulas: 1) (a*b)/c, 2) a^2+b+5*c, 3) a*b*c+b+(c/3)5-1 e 4) (a*b*c)^3/2.
*/
int main () {

	float a, b, c;

	printf ("Digite três números: \n");
	scanf ("%f%f%f", &a, &b, &c);

	printf ("As respostas são, respectivamente: \n");
	printf("[1] - %.2f \n", (a*b)/c);
	printf("[2] - %.2f \n", pow(a, 2)+b+5*c);
	printf("[3] - %.2f \n", a*b*c+b+(c/3)*5-1);
	printf("[4] - %.2f \n", pow((a*b*c),3)/2);

return 0;
}
