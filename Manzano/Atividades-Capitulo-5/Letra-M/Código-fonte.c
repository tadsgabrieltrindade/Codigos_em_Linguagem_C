#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){

printf("\t\t\t\tLetra M - Cap. 5");
setlocale(LC_ALL, "Portuguese");

float valorLido, media, soma; int i = 1;
valorLido = media = soma = 0.0;
printf("\nDigite 10 números inteiros: \n");

do{
    printf("\n%iº >>> ", i);
    scanf("%f", &valorLido);
    soma = soma + valorLido;
   i++;
}while(i<=10);
    media = soma / 10;
printf("\nO valor do somatório dos 10 números inseridos é %.2f. Já a média é aproximadamente %.2f.\n", soma, media);
system("\npause\n");
return 0;
}
