#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 6				//Define o tamanho da fila;

typedef struct FILA{
  int dado[N];
  int fim;
}FILA;


void inicializarFIla(FILA *f){		//Essa função permite que todos os dados em todos os índices estejam com o valor 0 (zero);
  for(int i=0; i<N; i++){
    f->dado[i] = 0;
  }
  f->fim = 0;						//Indica qual é a posição inicial para inserir um elemento na estrutura;
}

void inserirFila(int dado, FILA *f){
  if(f->fim == N){					//A verificação compara o valor de fim com o tamanho da fila para saber se está cheia ou não;
    printf("\nFila cheia!\n");
  }else{
     if(f->dado[0] == 0){			//Nessa, a verificação permite inserir o dado quando a fila se encontra vazia;
      f->dado[0] = dado;
      f->fim++;
    }else{
      f->dado[f->fim] = dado;		//Caso contrário, o dado é inserido no dado na qual o valor da variável fim foi atribuído;
      f->fim++;
    }
    printf("\n Mensagem: número %d inserido com sucesso!\n", dado);
  }

}

int removerFila(FILA *f){
  if(f->dado[0] == 0){				//A verificação permite saber se o primeiro elemento é zero e,
    printf("\nFila vazia!\n");		//com isso, concluir que a fila está vazia;
    return -1;
  }else{
    int dado = f->dado[0], i=0;
    do{								//Esse loop permite movimentar os elementos da fila ao remover o primerio da fila;
        f->dado[i] = f->dado[i+1];	
        i++;
    }while(f->dado[i+1] != 0);
    f->fim--;
    f->dado[f->fim] = 0;
    return dado;
  }
}

void imprimirFila(FILA *f){
    if(f->dado[0] == 0){			//Verifica se o elemento do primeiro índice é igual a 0 (zero);
      printf("\nFila vazia!\n");
    }else{
      printf("\nSegue a fila:\t");
      for(int i=0; i<N; i++){		
      	//Operador tenário para a formatação mais organizada na apresentação dos elementos da fila;
        i != (N-1) ? printf("%d\t", f->dado[i]) : printf("%d", f->dado[i]);		
      }
      printf("\nPosições:\t");
      for(int i=1; i<N+1; i++){			//A variável i recebe 1 para a conatagem do usuário ser 1º, 2º, ..., nº;
      	//Operador tenário para a formatação mais organizada na apresentação das posições dos elementos da fila;
      	i != N ? printf("%dº\t", i) : printf("%dº\n", i);
      }
      printf("\nObs.: O 0 (zero) indica que não há um valor para aquela posição.\n\n");
    }
}

void verificarFila(FILA *f){
	int poss = 0;
	if(f->fim == N)		
		printf("\n Situação: fila cheia!\n");
	else{
		if(f->dado[0] == 0)
			printf("\n Situação: fila vazia!\n");
		else{	
			for(int i=0; i<N; i++){				//Esse loop permite saber quais espeços estão livres para possíveis ocupações;
				if(f->dado[i] == 0)
        			poss++;		
			}
				printf("\n Situação: fila com %d posições livres! \n", poss);
		}
	}	
}

int buscarElemento(int dado, FILA *f){		//Busca sequencial para encontrar um determinado valor na fila;		
	for(int i=0; i<N; i++){
		if(f->dado[i] == dado){
			return i; 						//Retorna o índice do elemento quando é encontrado na fila;
		}
	}
	return -1;
}

int main(void) {
	setlocale(LC_ALL, "Portuguese");
  FILA f1;
  inicializarFIla(&f1);
  int op, valor;
  do{
	  	system("cls");
	  	printf("\t\t\t\tMENU - FILA ESTÁTICA (VETOR COM %d POSIÇÕES)\n\n", N);
	  	printf("\n1 - Inserir item na fila;");
	  	printf("\n2 - Remover item da fila;");
	  	printf("\n3 - Mostrar fila;");
	  	printf("\n4 - Verificar situação da fila;");
	  	printf("\n5 - Buscar item na fila;");
	  	printf("\n6 - Sair do programa.");
	  	printf("\n\n  Digite a opção desejada => ");
	  	scanf("%d", &op);
	  	
	  	switch(op){
	  		case 6:
	  			break;
	  			
	  		case 1:
	  			printf("\n\nDigite o número que deseja inserir diferente de 0 (zero): ");
	  			scanf("%d", &valor);
	  			if(valor == 0)
				  printf("\nNúmero não permitido!\n");
				else{
					inserirFila(valor, &f1);
				}
	  			break;
	  			
	        case 2:
	        	valor = removerFila(&f1);
	        	if(valor != 0 && valor != -1)
	            	printf("\n Mensagem: número %d removido com sucesso!\n\n", valor);
	            break;
	            
	        case 3:
	            imprimirFila(&f1);
	            break;
	            
	        case 4:
	            verificarFila(&f1);
	            break;    
	            
	        case 5:
	        	printf("\n\nDigite o número que deseja buscar: ");
	  			scanf("%d", &valor);
	  			if(valor == 0)
				  printf("\nNúmero não permitido!\n");
				else{
					int possicao = buscarElemento(valor, &f1);
		            if(possicao == -1)
		            	printf("\nO número %d não se encontra na fila!\n", valor);
					else
						printf("\nO número %d se encontra na %dº posição da fila.\n", valor, possicao+1); //Relacionado com a linha 61 
				}
	            break;      
	            
	        default:
		        printf("\n Mensagem: opção inválida! Por favor, digite uma opção válida.\n\n");
		}
			  
		printf("\n");
	  	system("pause");
	  }while(op != 6);
  return 0;
}
