#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int N, A, S;

printf("\t\t\t\tLETRA Y\n\n");
printf("Digite um número: \n>>> ");
scanf("%i", &N);
A = (N - 1);
S = (N + 1);
printf("\nO número %i tem o antecessor %i e sucessor %i.\n", N, A, S);
system("\n\npause\n");
    return 0;
}
