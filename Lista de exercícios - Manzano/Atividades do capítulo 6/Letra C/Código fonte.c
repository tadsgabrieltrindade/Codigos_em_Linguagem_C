#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCapítulo 6 - Letra C\n\n");

    float arrayA[20], arrayB[20], arrayC[20];  int i = 0;
    printf("\nDigite 20 elementos para a matriz A: \n");
    for(i = 0; i<20; i++){
        printf("%iº >>> ", i);
        scanf("%f", &arrayA[i]);}
    printf("\nAgora digite mais 20 elementos para a matriz B: \n");
    for(i = 0; i<20; i++){
        printf("%iº >>> ", i);
        scanf("%f", &arrayB[i]);}
    for(int linha = 0; linha<=120; linha++) //Este laço é para criar uma linha de separação entre os comandos de entrada
        printf("-");                        //e saída, assim fica mais organizado a linha
    for(i = 0; i<20; i++){
        arrayC[i] = arrayA[i] - arrayB[i];
        printf("\nA subretação do elemento %.1f pelo %.1f correspondentes, respectivamente, pelas matrizes A e B na matriz C é %.1f.", arrayA[i], arrayB[i], arrayC[i]);
    }

    printf("\n\n");
    system("\npause");
    return 0;
}
