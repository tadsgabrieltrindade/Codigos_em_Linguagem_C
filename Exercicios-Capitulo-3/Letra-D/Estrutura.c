#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;
        printf("\t\t\t\t\t LETRA D \n\n");
    printf("Digite o tempo gasto da viagem em minutos: ");
    scanf("%f", &TEMPO);
    printf("Digite a velocidade média da viagem: ");
    scanf("%f", &VELOCIDADE);
DISTANCIA = TEMPO * VELOCIDADE;
LITROS_USADOS = DISTANCIA / 12;

printf(" \n A velocidade média foi de %.1f Km/h ;\n O tempo percorrido da viagem for de %.1f Min; \n A distância percorrida foi de %.1f Km e; \n A quantidade de litros usado durante a viagem foi de %.1f Litros.\n", VELOCIDADE, TEMPO, DISTANCIA, LITROS_USADOS);

    system("\n pause");
return 0;
}
