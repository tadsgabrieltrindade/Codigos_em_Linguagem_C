#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int Num = 0;
printf("\t\t\t\tCapítulo 4 - Letra K\n\n");
printf("Digite um número: \n>>> ");
scanf("%i", &Num);
                                                    //Utilizei operador tenário aqui para facilitar
    (1<=Num && Num<=9) ? printf("\nO número está na faixa permitida.\n") : printf("\nO número está fora da faixa permitida.\n");

 system("\npause\n");
    return 0;
}
