#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float altura, raio, volume, area;
    printf("Digite o raio da base: ");
    scanf("%f", &raio);
        area=3,14159*raio*raio;
    printf("\n A área da base é de %.1f metros quadrados.\n", area);
    printf("Digite a altura da do cilindro: ");
    scanf("%f", &altura);
        volume=area*altura;
    printf("\n O volume do cilindro é de %.1f metros cúbicos.", volume);
return 0;
system("\npause");
}
