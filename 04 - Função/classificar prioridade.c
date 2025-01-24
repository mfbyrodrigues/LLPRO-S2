#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*
Elabore um programa para classificar o atendimento dos clientes de uma lotérica de acordo com a prioridade de idade.
O programa deve solicitar ao usuário o ano de nascimento e através do uso de função o programa calcula a idade
e classifica o atendimento de acordo com a tabela abaixo:
*/

int ClassificarPrioridade (int idade) {
	
	if (13 >= idade) {
		
		return 1;
	}
	if (14 <= idade && idade <= 21) {
		
		return 3;
	}
	if (22 <= idade && idade <= 60) {
		
		return 2;
	}
	if (idade > 60) {
		
		return 4;
	}
}

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	int idade, resposta;
	
	printf ("Digite sua idade abaixo: \n");
	scanf ("%d", &idade);
	
	resposta = ClassificarPrioridade (idade);
	
	if (resposta == 1) {
		
		printf ("Criança deve estar acompanhada de um adulto para atendimento.");
	}
	if (resposta == 3) {
		
		printf ("Fila comum – Sem prioridade.");
	}
	if (resposta == 2) {
		
		printf("Fila comum – Sem prioridade.");
	}
	if (resposta == 4) {
		
		printf("Fila prioritária.");
	}
	
	return 0;
}
