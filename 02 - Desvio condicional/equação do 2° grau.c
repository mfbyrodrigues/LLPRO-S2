#include <stdio.h>
#include <math.h>

// Faça um programa que resolva uma equação do 2º grau completa e dê as raízes, se houver. Considere, matemáticamente, todas as possibilidades.


int main () {

    float a, b, c, delta, x1, x2;

    printf ("Digite um valor para a: \n");
    scanf ("%f", &a);
    printf ("Digite um valor para b: \n");
    scanf ("%f", &b);
    printf ("Digite um valor para c: \n");
    scanf ("%f", &c);

    if (a!=0 && b!=0 && c!=0) {
        delta = pow(b, 2)-4*a*c;
        
        if (delta<0) {
            printf ("Desculpe, não existem raízes reais para os valores informados! \n");
        }
        else {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            
            printf ("Suas raízes são: \n");
            printf ("X1: %.2f \n", x1);
            printf ("x2: %.2f \n", x2);
        }
    }
    else {
        printf ("Desculpe, esses valores não correspondem à uma equação do 2º grau completa. \n");
    }

return 0;
}
