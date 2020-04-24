#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int a;

    printf("Digite um número diferente de 5: ");
    scanf("%i", &a);

     if (a!=5) {
        printf("\nSeu número realmente é TRUE, %i.", a);
        printf("\n%i", a==5);
     }
     else {
        printf("\nVocê digitou o númeor 5, FALSE!!!");
        printf("\n%i", a==5);
     }
        return 0;
}
