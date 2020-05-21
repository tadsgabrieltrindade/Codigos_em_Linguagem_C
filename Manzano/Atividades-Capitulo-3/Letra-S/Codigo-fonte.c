#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float A, B, S, SUB, M, D;
A = B = S = SUB = M = D = 0.0;
printf("\t\t\t\tLETRA S\n\n");

printf("Digite um valor: \n>>> ");
scanf("%f", &A);
printf("\nDigite outro valor: \n>>> ");
scanf("%f", &B);

S = (A + B);
SUB = (A - B);
M = (A * B);
D = (A / B);

printf("\nResultados: ");
printf("\n%1.f + %1.f = %1.f;", A, B, S);
printf("\n%1.f - %1.f = %1.f;", A, B, SUB);
printf("\n%1.f * %1.f = %1.f;", A, B, M);
printf("\n%1.f / %1.f = %1.f;\n", A, B, D);

    system("\n\npause\n");
    return 0;
}
