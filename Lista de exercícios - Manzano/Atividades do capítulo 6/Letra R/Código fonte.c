#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCapítulo 6 - Letra R\n\n");

    int arrayA[6], arrayB[6], arrayC[6], arrayD[6];
    printf("\nDigite seis elementos para a matriz A: \n");
    for(int i = 0; i<6; i++){
        scanf("%i", arrayA[i]);
        arrayA[i] % 2 == 0 ? arrayD[i] = arrayA[i] : arrayC[i] = arrayA[i];
    }
    printf("\nAgora digite mais seis elementos para a matriz B: \n");
    for(int i = 0; i<6; i++){
        scanf("%i", arrayB[i]);
        arrayB[i] % 2 == 0 ? arrayD[i] = arrayB[i] : arrayC[i] = arrayB[i];
    }
    printf("\nApresentando os elementos pares: \n");
    for(int i = 0; i < 6; i++){
        printf("\n%i", arrayD[i]);
    }
    printf("\nApresentando os elementos ímpares: \n");
    for(int i = 0; i < 6; i++){
        printf("\n%i", arrayC[i]);
    }
    printf("\n\n");
    system("\npause");
    return 0;
}
