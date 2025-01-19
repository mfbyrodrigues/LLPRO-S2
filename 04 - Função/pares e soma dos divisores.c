#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* 
Escreva um programa que leia 5 números inteiros positivos (utilize uma função que leia
esse número e verifique se ele é positivo). Para cada número informado escrever a soma
de seus divisores (exceto ele mesmo). Utilize a função SomaDivisores para obter a
soma.

4.1 Nome: SomaDivisores
4.2 Descrição: Calcula a soma dos divisores do número informado (exceto ele
mesmo).
4.3 Entrada: Um número inteiro e positivo.
4.4 Saída: A soma dos divisores. Exemplo: Para o valor 8: 1+2+4 = 7
*/

int VerificaPositivo (int num) { // Função para verificar se um número é positivo
    
	return num > 0;
}

int SomaDivisores (int num) { // Função para calcular a soma dos divisores de um número (exceto ele mesmo)
	
    int soma = 0;

    for (int i = 1; i < num; i++) {
    	
        if (num % i == 0) {         
            soma = soma + i;              
        }
    }

    return soma;
}

int main () {

    setlocale (LC_ALL, "Portuguese");

    int numeros [5]; // Array para armazenar os números
    int soma;

    printf ("Digite cinco números inteiros positivos: \n");

    for (int i = 0; i < 5; i++) {
    	
        scanf ("%d", &numeros [i]);

        while (!VerificaPositivo (numeros [i])) { 
            
			printf ("Número inválido! Digite um número inteiro positivo:\n");
            scanf ("%d", &numeros [i]);
        }
    }

    printf ("Soma dos divisores dos números informados (exceto eles mesmos): \n");

    for (int i = 0; i < 5; i++) {
        
		soma = SomaDivisores(numeros [i]);
        printf ("Número: %d -> Soma dos divisores: %d \n", numeros [i], soma);
    }

    return 0;
}
