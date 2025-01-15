#include <stdio.h>
#include <math.h>

// “Área do círculo”. Faça um programa para calcular a área de uma circunferência.

int main () {

    float raio, area;
    const float PI = 3.14;

    printf ("Digite o valor do raio da circunferência: \n");
    scanf ("%f", &raio);

    area = PI*pow(raio, 2);
    
    printf ("A área da circunferência é: %.2f \n", area);

return 0;
}
