#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C;
printf("\t\t\t\t\t Identificador de trângulo \n\n");

    printf("Qual é o valor do lado A do triângulo? ");
    scanf("%f", &A);

    printf("\nQual é o valor do lado B do triângulo? ");
    scanf("%f", &B);

    printf("\nQual é o valor do lado C do triângulo? ");
    scanf("%f", &C);

        if ((A<B+C)&&(B<A+C)&&(C<A+B)){
            if ((A==B) && (B==C)){
                printf("\n\tOs valores remetem a um triângulo equilátero.\n");
            }else{
                if ((A==B)||(A==C)||(C==B)){
                    printf("\tOs valores remetem a um triângulo isósceles.\n");
                }else{
                    printf("\tOs valores remetem a um triângulo escaleno.\n");
                }
            }
        }else{
            printf("\tOs valores indica que o tamanho dos lados não configuram um triângulo. \n");
        }

printf("\t\t\t\t\t\t\t\t Gabriel Trindade \n \t\t\t\t\t\t\t Copyright © Todos os direitos são reservados. \n ");
    system("\n pause");
return 0;
}
