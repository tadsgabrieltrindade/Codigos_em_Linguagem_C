#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCapítulo 6 - Letra E\n\n");

    int arrayA[15], arrayB[15], i = 0, cont = 1, fat =1;
    printf("\nDigite 15 elementos para a matriz A: \n");
    for(i = 0; i<15; i++){
        printf(">>> ");
        scanf("%i", &arrayA[i]);}
    for(int linha = 0; linha<=90; linha++) //Este laço é para criar uma linha de separação entre os comandos de entrada
    printf("-");                        //e saída, assim fica mais organizado a linha

    printf("\nSegue os valores da matriz A e a fatorial desse mesmo valor na matriz B:\n\n");
  for(i; i<15; i++){
    while(cont<=i){
        fat = fat * cont; cont++;
    }
        arrayB[i] = fat;
        printf("Foi inserido o valor %i na matriz A e o seu fatorial é %i na matriz B\n", arrayA[i], arrayB[i]);
  }



    printf("\n\n");
    system("\npause");
    return 0;
}
