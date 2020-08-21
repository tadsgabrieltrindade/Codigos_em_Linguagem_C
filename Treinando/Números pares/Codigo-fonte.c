#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 1, nPares;
do{

        system("cls");
        printf("Digite a até quando é para apresentar os números pares: \n>>> ");
        scanf("%i", &nPares);

    for (int x=1; x<=nPares; ++x){
        if(x % 2 == 0){
            printf("\n%i\n", x);
            continue;}
    }
    printf("\nDigite (0) para sair ou digite (1) para fazer uma nova consulta: \n>>> ");
    scanf("%i", &i);
}while(i!=0);
    return 0;
}
