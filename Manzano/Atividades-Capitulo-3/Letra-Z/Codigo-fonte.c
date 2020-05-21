#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, D, Q;

printf("\t\t\t\tLETRA Z\n\n");
printf("Digite o primeiro número: \n>>> ");
scanf("%i", &A);
printf("Digite o segundo número: \n>>> ");
scanf("%i", &B);
D = (A / B);
Q = (pow(D, 2));
printf("\nO quadrado da divisão entre o primeiro valor %i e o segundo valor %i é %i. \n", A, B, Q);
system("\n\npause\n");
    return 0;
}
