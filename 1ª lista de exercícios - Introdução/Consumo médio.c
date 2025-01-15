#include <stdio.h>

// Descrição: Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida, em KM, e o total de combustível gasto em L. Entrada: O programa lê o valor da distância e a quantidade de combustível. Saída: Mostra o consumo médio do automóvel.

int main () {

	float distT, combgT, consuM;
		
	printf ("Insira a distância total percorrida, em KM: \n");
	scanf ("%f", &distT);
	printf ("E o total de combustível gasto, em L: \n");
	scanf ("%f", &combgT);
	
	consuM = (distT/combgT);

	printf ("O consumo médio do automóvel é de: %.2f\n", consuM);
	
return 0;
}
