#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(){
      setlocale(LC_ALL,"Portuguese");
   int i = 1;
do{
        if (i>1){
                    system("cls");
        printf("Operação inválida!");
        printf("\n\nDeseja fazer uma nova consulta? \nDigite (1) para Sim e (0) para Não. \n>>> ");
        scanf("%i", &i);
            }else{

    system("cls");
    int num1, num2, soma, mult, sub, div;

    printf("\t\t\t\tBem vindo a nossa calculadora!\n");
    printf("Digite um valor: \n>>> ");
    scanf("%i", &num1);
    printf("Digite o segundo valor: \n>>> ");
    scanf("%i", &num2);

    soma = num1+num2;
    mult = num1*num2;
    sub = num1-num2;
    div = num1/num2;

    printf("\nA soma é %i;\n", soma);
    printf("A multiplicação é %i;\n", mult);
    printf("A subtracao  é %i;\n", sub);
    printf("A divisao é %i;\n", div);

    printf("\n\nDeseja fazer uma nova consulta? \nDigite (1) para Sim e (0) para Não. \n>>> ");
    scanf("%i", &i);
  }
    }while(i!=0);
return 0;
}

