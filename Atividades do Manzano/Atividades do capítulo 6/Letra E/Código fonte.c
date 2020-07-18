#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCapítulo 6 - Letra E\n\n");

    int arrayA[15], arrayB[15], i = 0, fat =1;
    printf("\nDigite 15 elementos para a matriz A: \n");
    for(i = 0; i<15; i++){
        printf(">>> ");
        scanf("%i", &arrayA[i]);}
    for(int linha = 0; linha<=90; linha++) //Este laço é para criar uma linha de separação entre os comandos de entrada
    printf("-");                        //e saída, assim fica mais organizado a linha
    printf("\nSegue os valores da matriz A e a fatorial desse mesmo valor na matriz B:\n\n");
 for(i = 0; i<15; i++){
    for(int j = 1, cont = arrayA[i]; j<=cont; j++){
        fat *= j;
    }
    arrayB[i] = fat; fat = 1;
    printf("\n%i = %i", arrayA[i], arrayB[i]);
 }
    printf("\n\n");
    system("\npause");
    return 0;
}
