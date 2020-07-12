#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float PE, METRO;

printf("\t\t\t\tLETRA W\n\n");
printf("Digite o valor em pés: \n>>> ");
scanf("%f", &PE);
METRO = (PE * 0.3048);

printf("\nO valor de %1.f pés equivale aproximandamente a %1.f metros. \n", PE, METRO);
system("\n\npause\n");
    return 0;
}
