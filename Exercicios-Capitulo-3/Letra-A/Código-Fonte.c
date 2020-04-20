#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float Tc, F;
    printf("\t\t\t\t LETRA A \n");
    printf("\n Digite a temperatura em Celsius: ");
    scanf("%f", &Tc);
    F = ((9*Tc+160)/5);
    printf(" \n Sua temperatura é %.1f°F \n", F);
    system("pause");

return 0;
}
