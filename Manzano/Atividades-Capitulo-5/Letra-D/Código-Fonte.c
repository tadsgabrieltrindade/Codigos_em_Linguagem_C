#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{

    printf("\t\t\t\tCapítulo 5 - Letra D\n\n");
    setlocale(LC_ALL,"Portuguese");
int i, R;
i = 0;
R = 1;
    while(i <= 500){
                if(i % 2 == 0){
            R = R + i;
            i++;
                }else
                i++;
    }
    printf("\nO resultado da soma dos 500 primeiros números naturais pares é %i.\n", R);

 system("\npause\n");
    return 0;
}

