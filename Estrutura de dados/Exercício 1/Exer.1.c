#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

void linhas(){
	int i;
	for(i = 1; i<=75; i++){
		printf("_");
	}printf("\n\n");
}


int main (){
	setlocale(LC_ALL, "portuguese");
	struct dados_pessoais{
		char nome[30];
		int idade;
		char endereco[96];
	};
	 struct dados_pessoais Dados;
	
	printf("\nDigite o seu nome: ");
	gets(Dados.nome);
	fflush(stdin);
	printf("\nOlá %s, agora digite sua idade: ", Dados.nome);
	scanf("%i", &Dados.idade);
	fflush(stdin);
	printf("\nOk %s, digite agora o seu endereço: ", Dados.nome);
	gets(Dados.endereco);
	
	linhas();
	printf("\n>>>>Dados cadastrados<<<<\n");
	printf("Nome: %s\n", Dados.nome);
	printf("Idade: %i\n", Dados.idade);
	printf("Endereço: %s\n\n", Dados.endereco);
	
	system("pause");
	return 0;
}
