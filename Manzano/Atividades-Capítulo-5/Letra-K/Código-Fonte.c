#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra K - Cap. 5\n");
    setlocale(LC_ALL, "Portuguese");
float soma, pot;
int i;
i=soma=pot=0;

do {
    pot = pow(2,i);
    soma = pot + soma;
    i++;
}while(i<=64);

printf("\nO somatório dos grãos de trigo é %17.f.\n", soma);

system("\npause\n");
return 0;
}
