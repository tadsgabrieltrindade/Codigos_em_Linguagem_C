#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCap�tulo 6 - Letra A\n\n");

    char pessoa[11][15]; int i = 1;
    printf("\nDigite os primeiros nomes das pessoas dez vezes: \n");
do{
    printf("%i� >>> ", i);
    scanf("%s", &pessoa[i]);
    i++;
}while(i<=10);
    printf("\n");

    for(int linha = 1; linha<=50; linha++){
            printf("-");}
            printf("\nOs nomes das pessoas inseridas s�o: ");
    for (i = 1; i<=10; i++){
        printf("\n%i� pessoa: %s ", i, pessoa[i]);}
    printf("\n");
    return 0;
}
