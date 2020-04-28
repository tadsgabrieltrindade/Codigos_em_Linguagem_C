#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float R, A;
R = A = 0.0;

printf("Digite o raio da circunfêrencia: \n>>> ");
scanf("%f", &R);

A = (3.14159265 * pow(R, 2));

printf("\nA área da circunfêrencia é aproximadamente %1.f metros quadrados.\n", A);
    system("\n\npause\n");
    return 0;
}
