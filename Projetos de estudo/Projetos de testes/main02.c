#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

 int main(){
     setlocale(LC_ALL, "Portuguese");


int i = 0;
char nome[3], sobrenome[3];


    printf("\nDigite seu primeiro nome: \n>>> ");
    scanf("%s", nome);
    printf("\nDigite seu segundo nome: \n>>> ");
    scanf("%s", sobrenome);

    printf("\nSeu nome é %s %s.\n", nome, sobrenome);

return 0;
}
