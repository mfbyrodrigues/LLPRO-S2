#include <stdio.h>
#include <math.h>

// Escreva um programa que, dada a massa e a altura de uma pessoa, mostre o resultado do IMC. Fórmula: imc = massa/(altura^2).

int main () {

    float massa, altura, IMC;

    printf ("Digite a sua massa, em KG: \n");
    scanf ("%f", &massa);
    printf ("Digite a sua altura, em M: \n");
    scanf ("%f", &altura);

    IMC = (massa/(pow(altura, 2)));
    
    printf ("O seu IMC é de: %.2f \n", IMC);

return 0;
}
