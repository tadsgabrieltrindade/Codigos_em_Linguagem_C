#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
char SEXO, NOME, M, F;
printf("\t\t\t\tCapítulo 4 - Letra M\n\n");
printf("Digite M para masculino ou F para feminino, lembre-se, em maiúsculo: >>> ");
scanf("%c", &SEXO);
    if ((SEXO == M) || (SEXO == F)){
            printf("\nDigite seu nome: \n>>> ");
            getche(NOME);
       if (SEXO == M)
        printf("\nIlmo. Sr. %c.\n", NOME);

        else
            printf("\nIlma. Sra. %c.\n", NOME);
    }
    else
        printf("\nSexo informado inválido!\n");

 system("\npause\n");
    return 0;
}
