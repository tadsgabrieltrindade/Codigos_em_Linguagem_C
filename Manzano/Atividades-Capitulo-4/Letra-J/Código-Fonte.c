#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCapítulo 4 - Letra J\n\n");
int Num, R;
printf("Digite um número: \n>>> ");
scanf("%i", &Num);
R = (Num % 2);
    if (R == 0){
        printf("\nO número é par!\n");
    }else{
        printf("\nO número é ímpar!\n");
    }

    system("\npause\n");
        return 0;

}
