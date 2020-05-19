#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int Num, R;
printf("\t\t\t\tCapítulo 4 - Letra O\n\n");
printf("Digite um número:\n>>> ");
scanf("%i", &Num);
R = (Num * 2);
    if (R > 30)
            printf("\nO resultado da multiplicação de %i por 2 é %i.\n", Num, R);
    else


 system("\npause\n");
    return 0;
}
