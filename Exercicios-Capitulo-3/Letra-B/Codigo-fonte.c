#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float Tf, C;
    printf("\t\t\t\t Conversor de temperatura de Fahrenheit para Celsius");
    printf("\n Digite a temperatura em Fahrenheit: \n");
    scanf("%f", &Tf);
    C = (((Tf-32)*5)/9);
    printf("\n Sua temperatura é %.1f°C", C);
return 0;
system("\npause");
}
