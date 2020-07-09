#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float altura, raio, volume, area;

    altura = raio = volume = area = 0;
    const float pi = 3.14159;
    printf("\nDigite o raio da base em cm: \n>>> ");
    scanf("%f", &raio);
        area = (( pow(raio, 2))*pi);
    printf("A área da base é de %1.f centímetros quadrados.\n", area);
    printf("\nDigite a altura da do cilindro: \n>>> ");
    scanf("%f", &altura);
        volume = (altura*area);

    printf("\nO volume do cilindro é de aproximadamente %1.f centímetros cúbicos.\n\n", volume);
return 0;

}
