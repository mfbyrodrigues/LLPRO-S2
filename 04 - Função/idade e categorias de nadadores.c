#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* 
Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna ,
também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:

- Idade: 5 a 7 anos e Categoria: Infantil A;
- Idade: 8 a 10 anos e Categoria: Infantil B;
- Idade: 11 a 13 anos e Categoria: Juvenil A;
- Idade: 14 a 17 anos e Categoria: Juvenil B;
- Idade: Maiores de 18 (Inclusive) e Categoria: Adulto.
*/

void DeterminarCategoria (int idade, char categoria []) { // Função para determinar a categoria do nadador
    
	if (idade >= 5 && idade <= 7) {
		
        sprintf (categoria, "Infantil A");
    }
	else if (idade >= 8 && idade <= 10) {
		
        sprintf (categoria, "Infantil B");
    }
	else if (idade >= 11 && idade <= 13) {
		
        sprintf (categoria, "Juvenil A");
    }
	else if (idade >= 14 && idade <= 17) {
        
		sprintf (categoria, "Juvenil B");
    }
	else if (idade >= 18) {
        
		sprintf (categoria, "Adulto");
    }
	else {
        sprintf (categoria, "Idade fora da faixa");
    }
}

int main () {
	
    setlocale (LC_ALL, "Portuguese"); 

    int idade;
    char categoria [20];

    printf ("Digite a idade do nadador: \n");
    scanf ("%d", &idade);

    DeterminarCategoria (idade, categoria);

    printf ("Categoria do nadador: %s \n", categoria);

    return 0;
}
