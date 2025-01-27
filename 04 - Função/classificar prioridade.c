#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Elabore um programa para classificar o atendimento dos clientes de uma lotérica de acordo com a prioridade
de idade. O programa deve solicitar ao usuário o ano de nascimento e atraves do uso de função o programa
calcula a idade e classifica o atendimento de acordo com a tabela abaixo...
*/

char ClassificarAtendimento (int idade) {
	
	if (idade < 13) {
		
		return 'C'; // Criança
	}
	else if (idade >= 13 && idade <= 21) {
		
		return 'A'; // Adolescente
	}
	else if (idade >= 22 && idade <= 60) {
		
		return 'D'; // Adulto
	}
	else if (idade > 60) {
		
		return 'I'; // Idoso
	}
}

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int ano_nascimento, idade;
	char resposta;
	
	printf ("Digite seu ano de nascimento: \n");
	scanf ("%d", &ano_nascimento);	
	
	idade = (2025 - ano_nascimento);
	
	resposta = ClassificarAtendimento (idade);

	if (resposta == 'C') {
		
		printf ("Criança deve está acompanhada de adulto para atendimento. \n");
	}
	else if (resposta == 'A') {
		
		printf ("Fila comum - Sem prioridade. \n");
	}
	else if (resposta == 'D') {
		
		printf ("Fila comum - Sem prioridade. \n");
	}
	else if (resposta == 'I') {
		
		printf ("Fila prioritária. \n");
	}
	
	return 0;
}
