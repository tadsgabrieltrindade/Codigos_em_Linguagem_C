#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra J - Cap. 5");
    setlocale(LC_ALL, "Portuguese");
int C, F;
C = 10;
F = 0;
printf("\nAs temperaturas são: \n");
    while (C<=100){
         F = ((9*C+160)/5);
         printf("\n%iºC = %iºF", C, F);
         C += 10;
    }

printf("\n\n");
system("\npause\n");
return 0;
}
