#include <stdio.h>

/* Um trabalhador ganha por horas trabalhadas. 1h de trabalho vale 40 reais.
Se esse profissional trabalhar 1 mês, apenas de segunda à sexta, qual será o salário recebido?
Lembre-se de descontar 15% de impostos pagos.
*/

int main () {

    float porDIA, porMES, taxa_imposto;

    porDIA = (40*8);
    porMES = (porDIA*20);
    taxa_imposto = (porMES*0.15);

    printf ("O salário desse trabalhador, no final do mês, em reais, será: %.2f \n", taxa_imposto);

return 0;
}
