#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, A2, B, B2, C, C2, Resul;
A = A2 = B = B2 = C = C2 = Resul = 0;

printf("\nDigite o valor de A: \n>>> ");
scanf("%i", &A);
printf("\nDigite o valor de B: \n>>> ");
scanf("%i", &B);
printf("\nDigite o valor de C: \n>>> ");
scanf("%i", &C);

A2 = (A*A);
B2 = (B*B);
C2 = (C*C);
Resul = (A2+B2+C2);

printf("\nO valor da soma dos quadrados dos valores inseridos é %i.\n", Resul);
    system("\npause");
    return 0;
}
