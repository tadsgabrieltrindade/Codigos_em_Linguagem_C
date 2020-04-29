#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float DISTANCIA, TEMPO, VELOCIDADE;
DISTANCIA = TEMPO = VELOCIDADE = 0.0;

printf("\t\t\t\tLETRA T\n\n");
printf("Digite a distância percorrida, em KM, do projétil: \n>>> ");
scanf("%f", &DISTANCIA);
printf("\nDigite o tempo, em segundos, do percurso do projétil: \n>>> ");
scanf("%f", &TEMPO);

VELOCIDADE = ((DISTANCIA * 1000) / (TEMPO * 60));

printf("\nA velocidade do projétil foi de %1.f m/s.\n", VELOCIDADE);

    system("\n\npause\n");
    return 0;
}
