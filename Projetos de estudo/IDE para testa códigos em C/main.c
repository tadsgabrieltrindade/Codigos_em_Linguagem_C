#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){

printf("\t\t\t\tLetra L - Cap. 5");
setlocale(LC_ALL, "Portuguese");

int valorLido, i, valorGuardado, fat, somaTotal, cont;
valorLido = valorGuardado = 0; fat = i = somaTotal = cont=1;
printf("\nDigite 15 números inteiros: \n");
do{
        printf("\n%iº >>> ", i);
        scanf("%i", &valorLido);
            if(cont <= valorLido){
                fat = fat * cont;
                cont++;
            }
        somaTotal = fat + somaTotal;
   i++;
}while(i<=15);
printf("\nO valor do somatório do fatorial dos 15 números inseridos é %i.\n", somaTotal);
system("\npause\n");
return 0;
}
