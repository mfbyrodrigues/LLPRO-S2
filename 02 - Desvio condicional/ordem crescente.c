#include <stdio.h>

// Faça um programa que pergunte 2 números aleatórios ao usuário e mostre-os em ordem crescente.

int main () {

    float a, b;

    printf ("Insira dois números aleatórios: \n");
    scanf ("%f%f", &a, &b);

    if (a > b) {
        printf ("Ordem crescente: \n");
        printf ("%.0f \n", b);
        printf ("%.0f \n", a);
    }
    
    if (b > a) {
        printf ("Ordem crescente: \n");
        printf ("%.0f \n", a);
        printf ("%.0f \n", b);
    }

return 0;
}
