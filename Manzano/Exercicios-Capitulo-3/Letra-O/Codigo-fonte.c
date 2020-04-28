#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, C, D, S, P;
A = B = C = D = S = P = 0;

printf("\nDigite o primeiro valor: \n>>> ");
scanf("%i", &A);
printf("\nDigite o segundo valor: \n>>> ");
scanf("%i", &B);
printf("\nDigite o terceiro valor: \n>>> ");
scanf("%i", &C);
printf("\nDigite o quarto valor: \n>>> ");
scanf("%i", &D);

S = (A+C);
P = (B*D);

printf("\n O resultado da soma entre %i e %i é %i. \n O resultado da multiplicação entre %i e %i é %i.\n", A, C, S, B, D, P);
    system("\n\npause\n");
    return 0;
}
