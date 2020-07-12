#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, C, Resul, S;
A = B = C = Resul = 0;

printf("\nDigite o valor de A: \n>>> ");
scanf("%i", &A);
printf("\nDigite o valor de B: \n>>> ");
scanf("%i", &B);
printf("\nDigite o valor de C: \n>>> ");
scanf("%i", &C);

S = A+B+C;
Resul = (S*S);

printf("\nO valor do quadradado da soma dos valores inseridos é %i.\n", Resul);
    system("\npause");
    return 0;
}
