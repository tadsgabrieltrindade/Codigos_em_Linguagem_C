#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float RAIO, VOLUME;
RAIO = VOLUME = 0.0;
printf("\t\t\t\tLETRA U\n\n");

printf("Digite o raio da esfera: \n>>> ");
scanf("%f", &RAIO);

VOLUME = (4 * 3.14159 * pow(RAIO, 3) / 3);

printf("\nO volume da esfera é %1.f cm^3.\n", VOLUME);

    system("\n\npause\n");
    return 0;
}
