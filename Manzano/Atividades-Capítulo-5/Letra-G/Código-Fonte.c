#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra G - Cap. 5");
    setlocale(LC_ALL, "Portuguese");

int i, R;
i = R = 0;
printf("\nAs potências com base 3 e com o:");
    do{
        R = pow(3, i);
        printf("\nexpoênte %i é igual a %i", i, R);
        i++;
    }while(i <= 15);
printf("\n");
system("\npause\n");
return 0;
}
