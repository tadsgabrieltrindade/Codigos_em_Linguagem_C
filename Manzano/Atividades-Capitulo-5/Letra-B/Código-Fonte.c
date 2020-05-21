#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("\t\t\t\tCapítulo 5 - Letra B\n\n");

int Num, i, R;
i = 0;
printf("\Digite um número: \n>>> ");
scanf("%i", &Num);
printf("\nA tabuada de %i é: \n", Num);

    while(i <= 10){
            R = Num * i;
            printf("\%i x %i = %i.\n", Num, i, R);
            i++;
    }

 system("\npause\n");
    return 0;
}
