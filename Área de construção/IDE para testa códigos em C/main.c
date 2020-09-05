#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){

    int A, B, C; int i = 1;
do{
    system("cls");
    printf("\nDigite um valor para A: \n>>>");
    scanf("%i", &A);
    printf("\nDigite um valor para B: \n>>>");
    scanf("%i", &B);
    printf("\nDigite um valor para C: \n>>>");
    scanf("%i", &C);
    if (A<B && A<C){
        if (B<C)
            printf("\nA ordem crescente é: %i - %i - %i\n", A,B,C);
            else
            printf("\nA ordem crescente é: %i - %i - %i\n", A,C,B);
    }
    if (B<A && B<C){
        if (A<C)
            printf("\nA ordem crescente é: %i - %i - %i\n", B,A,C);
            else
            printf("\nA ordem crescente é: %i - %i - %i\n", B,C,A);
    }
    if (C<A && C<B){
        if (A<B)
            printf("\nA ordem crescente é: %i - %i - %i\n", C,A,B);
            else
            printf("\nA ordem crescente é: %i - %i - %i\n", C,B,A);
    }

     if (A == B){
        if (B==C)
            printf("\nNúmeros iguais!\n");
            else
                if (C<A)
                    printf("\nA ordem crescente é: %i - %i \n", C, A);
                else
                     printf("\nA ordem crescente é: %i - %i \n", A, C);
    }

    if (B == C){
        if (B<A)
            printf("\nA ordem crescente é: %i - %i \n", B, A);
        else
            printf("\nA ordem crescente é: %i - %i \n", A, B);
    }

    if (A == C){
        if (A<B)
            printf("\nA ordem crescente é: %i - %i \n", A, B);
        else
            printf("\nA ordem crescente é: %i - %i \n", B, A);
    }
    printf("\nDigite i: ");
    scanf("%i", &i);
}while(i==1);
    system("\npause");
    return 0;
}
