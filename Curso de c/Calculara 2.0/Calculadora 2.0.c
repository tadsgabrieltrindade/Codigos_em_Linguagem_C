#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, result;
    int op;

    printf("\t\t\t\t\t Calculadora 2.0 \n\n\n");

    do {

system("cls");
printf("\t\t\t\t\t Calculadora 2.0 \n\n\n");
            num1=num2=result=0;
        printf(" Digite (1) para somar; \n");
        printf(" Digite (2) para subtrair; \n");
        printf(" Digite (3) para multiplicar; \n");
        printf(" Digite (4) para dividir; \n");
        printf(" Digite (0) para sair do programa. \n\n");

        printf("Digite o número da operação desejada: ");
        scanf("%i", &op);
        if (op == 0){

        }else{
            if(op>5){printf("\n>>>Número da operação inválida!!<<<\n\n");
            }else{

          num1 = num2 = result = 0;
        printf("\nDigite o primeiro valor: ");
        scanf("%f", &num1);
        printf("\nDigite o sugundo valor: ");
        scanf("%f", &num2);

            if (op == 1){
                result = (num1 + num2);
                printf("\nO resultado da soma entre %1.f e %1.f é >>%1.f<<. \n\n", num1, num2, result);
            }else{
                  if (op == 2){
                    result = (num1 - num2);
                    printf("\nO resultado da subtração entre %1.f e %1.f é >>%1.f<<.\n\n", num1, num2, result);
                  }else{
                        if (op == 3){
                            result = (num1 * num2);
                            printf("\nO resultado da multiplicação entre %1.f e %1.f é >>%1.f<<.\n\n", num1, num2, result);
                        }else{
                              if( op == 4){
                                result = (num1 / num2);
                                printf("\nO resultado da divisão entre %1.f e %1.f é >>%1.f<<.\n\n", num1, num2, result);
                              }
                        }
                  }
            }
    }
        }
   system("pause");
    }while (op != 0); }



