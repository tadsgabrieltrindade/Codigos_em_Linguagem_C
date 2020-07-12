#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCapítulo 6 - Letra B\n\n");

    int A [8] [8]; int B [8] [8] ; int i = 1;
    printf("\nDigite oito valores para a matriz A: \n");
    do{
        printf(">>> "); scanf("%i",  &A[i]);
        i++;
    }while(i<=8);

     printf("\nOs números inseridos na matriz A, passando-os para a matriz B, ficam: \n");
    for(i = 0; i<=8; i++){
        *B[i] = (*A[i]) * 3;
        printf("\nPara posição %i da matiz A temos %i na matriz B ", i, B[i]);
    }
    printf("\n");
    system("\npause");
    return 0;
}
