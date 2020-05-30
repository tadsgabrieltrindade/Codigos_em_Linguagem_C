#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra H - Cap. 5");
    setlocale(LC_ALL, "Portuguese");

int i, E, B, P;
i = E = B = P = 1;
printf("\nDigite uma base natural: \n>>> ");
scanf("%i", &B);
printf("\nDigite o expoênte natural: \n>>> ");
scanf("%i", &E);
    do {
        P = P * B;
        i++;
    }while(i <= E);

printf("\n%i elevado a %i é igual a %i.\n", B, E, P);
printf("\n");
system("\npause\n");
return 0;
}
