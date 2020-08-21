#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra I - Cap. 5");
    setlocale(LC_ALL, "Portuguese");
int i, ATUAL, ANTERIOR, PROXIMO;
i = ANTERIOR = PROXIMO = 0;
ATUAL = 1;
printf("\nA sequência de Fibonacci até o décimo quinto termo é:\n ");
printf("0 - 1 - ");
    do{
        PROXIMO = ANTERIOR + ATUAL;
        printf("%i - ", PROXIMO);
        i++;
        ANTERIOR = ATUAL;
        ATUAL = PROXIMO;
    }while(i<=12);

printf("\n");
system("\npause\n");
return 0;
}
