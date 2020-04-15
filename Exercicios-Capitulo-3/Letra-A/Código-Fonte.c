#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float Tc, F;
    printf("\t\t\t\t Conversor de temperatura de Celsius para Fahrenheit");
    printf("\n Digite a temperatura em Celsius: \n");
    scanf("%f", &Tc);
    F = ((9*Tc+160)/5);
    printf("\n Sua temperatura é %.1f°F \n", F);
    system("pause");

return 0;
}
