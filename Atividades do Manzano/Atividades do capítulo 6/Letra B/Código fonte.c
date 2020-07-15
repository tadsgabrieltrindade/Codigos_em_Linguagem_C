#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\tCapítulo 6 - Letra B\n\n");

    int arrayA[] = {0,1,2,3,4,5,6,7}; int arrayB[] = {0,1,2,3,4,5,6,7}; int i = 0;
    printf("\nDigite oito valores para a matriz A: \n");
    do{
        printf(">>> "); scanf("%i",  &arrayA[i]);
        i++;
    }while(i<8);
     printf("\nOs números inseridos na matriz A, passando-os para a matriz B, ficam: \n");
    for(i = 0; i<8; i++){
        arrayB[i] = arrayA[i] * 3;
        printf("\n>> Para posição %i da matiz A que vale %i, temos %i na matriz B ", i, arrayA[i], arrayB[i]);
    }
    printf("\n\n");
    system("\npause");
    return 0;
}
