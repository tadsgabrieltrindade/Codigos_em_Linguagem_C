#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int A, B, R;
A = B = 0;
printf("\nDigite o 1º valor: \n>>> ");
scanf("%i", &A);
printf("\nDigite o 2º valor: \n>>> ");
scanf("%i", &B);

R = ((A*A) - 2*A*B + (B*B));

printf("\nO o quadrado da diferença dos valores são %i.\n", R);

    system("\npause");
    return 0;
}
