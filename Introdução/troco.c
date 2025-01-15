#include <stdio.h>

/* “Troco”. Uma máquina só funciona com notas de 5 reais e não entrega o troco, o café custa 7.
Sempre que o cliente deseja 1 café, tem que colocar 2 notas de 5 e acaba perdendo 3 reais.
Faça um programa que leia a quantidade de dinheiro que o cliente colocou na máquina e mostre qual troco ele deve receber.
*/

int main () {

	float dinheiro, troco;
	const float valor_cafe = 7;

	printf ("ATENÇÃO! NOSSA MÁQUINA DE CAFÉ ESTÁ QUEBRADA. ELA SÓ ACEITA DINHEIRO DE 5 EM 5 REIAS E O CAFÉ CUSTA 7 REAIS. PREENCHA DA MANEIRA NECESSÁRIA E VEJA O SEU TROCO PARA ENTREGARMOS O MESMO. \n");
	printf (" \n");
    	printf ("Qual a quantidade de dinheiro que deseja usar: \n");
    	scanf ("%f", &dinheiro);

    	troco = (dinheiro-valor_cafe);
    
    	printf ("O seu troco, em reais, será: %.2f \n", troco);

return 0;
}
