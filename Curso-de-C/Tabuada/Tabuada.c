#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<ctype.h>
int main()
{
setlocale(LC_ALL, "Portuguese");


int i = 1;
do{
        if (i>1){
            system("cls");
            printf("\nOperação inválida!! Por favor, digite uma operação válida.");
            printf("\nDigite (1) para outra tabuada;\nDigite (0) para sair do programa. \n>>> ");
            scanf("%i", &i);
        }else{
system("cls");
printf("\t\t\t\t\tTabuada\n\n\n");
int tabuada = 0, max = 0;
printf("Digite a tabuada desejada: \n>>> ");
scanf("%i", &tabuada);
printf("\nDigite até quando é para apresentar os resultados da tabuada: \n>>> ");
scanf("%i", &max);

    for (int x = 0; x<=max; ++x){
        printf("\n%i * %i = %i\n", tabuada, x, tabuada*x);
        }
        printf("\nDigite (1) para outra tabuada;\nDigite (0) para sair do programa. \n>>> ");
        scanf("%i", &i);

system("cls");
        }
}while(i!=0);


    return 0;
}
