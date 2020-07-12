#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float US, cotUS, BR;
US = cotUS = BR = 0;

printf("\nDigite a quantidade de reais a serem convertidos: \n>>> ");
scanf("%f", &BR);
printf("\nDigite a cotação atual do dólar: \n>>> ");
scanf("%f", &cotUS);

US = (BR/cotUS);

printf("\nO valor de R$%1.f é equivalente a US$%1.f\n", BR, US);

    system("\npause");
    return 0;
}
