#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int Num = 0;
printf("\t\t\t\tCapítulo 4 - Letra L\n\n");
printf("Digite um número: \n>>> ");
scanf("%i", &Num);
    if (!(Num > 3))
        printf("\nO número digitado foi %i.\n", Num);
    else

 system("\npause\n");
    return 0;
}
