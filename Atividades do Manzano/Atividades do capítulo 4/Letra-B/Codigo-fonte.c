#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int N, R;
N = R = 0;
printf("\t\t\t\tCapítulo 4 - Letra B\n\n");
printf("Digite uma valor: \n>>> ");
scanf("%i", &N);

    if (N > 0){
        printf("\nO número digitado foi %i. \n", N);
    }else{
        R = (N * (-1));
         printf("\nO módulo do número digitado é %i. \n", R);
    }

system("\n\npause\n");
    return 0;
}
