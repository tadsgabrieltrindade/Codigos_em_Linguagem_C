#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, C, D;
int resulA1, resulA2, resulA3, resulA4, resulA5, resulA6;
int resulM1, resulM2, resulM3, resulM4, resulM5, resulM6;

printf("Digite o valor de A: \n>>> ");
scanf("%i", &A);
printf("Digite o valor de B: \n>>> ");
scanf("%i", &B);
printf("Digite o valor de C: \n>>> ");
scanf("%i", &C);
printf("Digite o valor de D: \n>>> ");
scanf("%i", &D);

//Adições:
resulA1 = A + B;
resulA2 = A + C;
resulA3 = A + D;
resulA4 = B + C;
resulA5 = B + D;
resulA6 = C + D;

//Multiplicações:
resulM1 = A * B;
resulM2 = A * C;
resulM3 = A * D;
resulM4 = B * C;
resulM5 = B * D;
resulM6 = C * D;

printf("\nOs resultados das adições:\n");
printf("\n%i + %i = \t%i", A, B, resulA1);
printf("\n%i + %i = \t%i", A, C, resulA2);
printf("\n%i + %i = \t%i", A, D, resulA3);
printf("\n%i + %i = \t%i", B, C, resulA4);
printf("\n%i + %i = \t%i", B, D, resulA5);
printf("\n%i + %i = \t%i\n", C, D, resulA6);
printf("\nOs resultados das multiplicações:\n");
printf("\n%i * %i = \t%i", A, B, resulM1);
printf("\n%i * %i = \t%i", A, C,  resulM2);
printf("\n%i * %i = \t%i", A, D, resulM3);
printf("\n%i * %i = \t%i", B, C, resulM4);
printf("\n%i * %i = \t%i", B, D, resulM5);
printf("\n%i * %i = \t%i\n", C, D, resulM6);

system("\npause");

    return 0;
}
