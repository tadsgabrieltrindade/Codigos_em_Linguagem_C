#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, C, R;
printf("\t\t\t\tCapítulo 4 - Letra N\n\n");
printf("Digite um número:\n>>> ");
scanf("%i", &A);
printf("Digite outro número:\n>>> ");
scanf("%i", &B);
printf("Digite mais um número:\n>>> ");
scanf("%i", &C);
R = (A+B+C);
    if (R >= 100)
            printf("\nO resultado da soma entre os valores fornecidos é %i.\n", R);
    else


 system("\npause\n");
    return 0;
}
