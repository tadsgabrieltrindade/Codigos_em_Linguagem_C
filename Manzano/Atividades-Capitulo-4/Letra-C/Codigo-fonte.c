#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("\t\t\t\tCapítulo 4 - Letra C\n\n");

float N1, N2, N3, N4, MD;
N1 = N2 = N3 = N4 = MD = 0.0;
printf("Digite a primeira nota: \n>>> ");
scanf("%f", &N1);
printf("\nDigite a segunda nota: \n>>> ");
scanf("%f", &N2);
printf("\nDigite a terceira nota: \n>>> ");
scanf("%f", &N3);
printf("\nDigite a quarta nota: \n>>> ");
scanf("%f", &N4);
MD = ((N1 + N2 + N3 + N4) / 4);

    if( MD >= 5 ){
        printf("\nAprovado!");
        printf("\nSua média foi de %1.f.\n\n", MD);
    }else{
        printf("\nReprovado.");
        printf("\nSua média foi de %1.f.\n\n", MD);}

system("\n\npause\n");
    return 0;
}
