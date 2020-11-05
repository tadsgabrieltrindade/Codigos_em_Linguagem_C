#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int i, j, w;
void linhas(){
	for(w = 1; w<=75; w++){
		printf("_");
	}printf("\n\n");
}

	struct estudante{
		char nome[30];
		int matricula;
		float n[4], media[6];
	};
	typedef struct estudante Estudante;
	
	int main (){
	setlocale(LC_ALL, "portuguese");
	Estudante aluno[6]; float soma = 0.0;
	for(i=1; i<=5; i++){
		printf("\nDigite o nome do(a) %iº estudante: ", i);
		fflush(stdin); gets(aluno[i].nome); fflush(stdin);
		printf("\nDigite a matrícula do(a) estudante: ");
		scanf("%f", &aluno[i].matricula);
		printf("\nAgora digite a nota da: \n");
			for(j=1; j<=3; j++){
				printf(">>>nota %i: ", j);
				scanf("%f", &aluno[i].n[i]);
				soma = soma + aluno[i].n[i];
			}
			aluno[i].media[i] = soma / 3;
			soma = 0.0;
			linhas();
	}		
	
		if(aluno[1].media[1]>aluno[2].media[2] && aluno[1].media[1]>aluno[3].media[3] && aluno[1].media[1]>aluno[4].media[4] && aluno[1].media[1]>aluno[5].media[5]){
			printf("\nO(a) estudante com a maior média foi %s com a nota 1 de %.1f, nota 2 de %.1f e nota 3 de %.1f.\n", aluno[1].nome, aluno[1].n[1], aluno[1].n[2], aluno[1].n[3]);
		}else{
			if(aluno[2].media[2]<aluno[1].media[1] && aluno[2].media[2]<aluno[3].media[3] && aluno[2].media[2]<aluno[4].media[4] && aluno[2].media[2]<aluno[5].media[5]){
				printf("\nO(a) estudante com a maior média foi %s com a nota 1 de %.1f, nota 2 de %.1f e nota 3 de %.1f.\n", aluno[2].nome, aluno[2].n[1], aluno[2].n[2], aluno[2].n[3]);	
			}else{
				if(aluno[3].media[3]<aluno[1].media[1] && aluno[3].media[3]<aluno[2].media[2] && aluno[3].media[3]<aluno[4].media[4] && aluno[3].media[3]<aluno[5].media[5]){
					printf("\nO(a) estudante com a maior média foi %s com a nota 1 de %.1f, nota 2 de %.1f e nota 3 de %.1f.\n", aluno[3].nome, aluno[3].n[1], aluno[3].n[2], aluno[3].n[3]);	
				}else{
					if(aluno[4].media[4]<aluno[1].media[1] && aluno[4].media[4]<aluno[2].media[2] && aluno[4].media[4]<aluno[3].media[3] && aluno[4].media[4]<aluno[5].media[5]){
						printf("\nO(a) estudante com a maior média foi %s com a nota 1 de %.1f, nota 2 de %.1f e nota 3 de %.1f.\n", aluno[4].nome, aluno[4].n[1], aluno[4].n[2], aluno[4].n[3]);	
					}else{
						printf("\nO(a) estudante com a maior média foi %s com a nota 1 de %.1f, nota 2 de %.1f e nota 3 de %.1f.\n", aluno[5].nome, aluno[5].n[1], aluno[5].n[2], aluno[5].n[3]);	
					}
					
				}
			}
		}

	system("pause");
	return 0;
}
