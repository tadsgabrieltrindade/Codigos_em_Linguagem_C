#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include<conio.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tPágina 132 - Cap. 6\n\n");

float media[8]; int i = 0; float mediaFinal = 0;
do{
    printf("\nDigite a média do aluno %i: ", i);
    scanf("%f", &media[i]);
    mediaFinal = mediaFinal + media[i];
    i++;
}while(i<=7);

mediaFinal = mediaFinal / 8;
printf("\nA média da classe é %.2f.\n", mediaFinal);

system("\npause\n");
return 0;}

