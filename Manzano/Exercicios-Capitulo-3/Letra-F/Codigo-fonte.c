#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A1, B1, A2, B2;
A1 = B1 = A2 = B2 = 0;

printf("Digite um valor inteiro para a variável A: \n>>> ");
scanf("%i", &A1);
printf("\nDigite agora para a variável B: \n>>> ");
scanf("%i", &B1);
printf("\nO valor digitado para a variável A foi %i e para a variável B foi %i.", A1, B1);
printf("\nFazendo a troca ...\n");

A2 = A1;
B2 = B1;
    A1 = B1 = 0;
A1 = B2;
B1= A2;

printf("\nO valor da variável A agora é %i e da variável B é %i. \n", A1, B1);

    system("\npause");
    return 0;
}
