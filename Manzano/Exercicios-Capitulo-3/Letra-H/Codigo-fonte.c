#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float C, L, H, V;
C = L = H = V = 0.0;

printf("\nDigite o comprimento do retângulo em centímetros: \n>>> ");
scanf("%f", &C);
printf("\nDigite a largura do retângulo em centímetros: \n>>> ");
scanf("%f", &L);
printf("\nDigite a altura do retângulo em centímetros: \n>>> ");
scanf("%f", &H);

V = (C * L * H);

printf("\nO volume do retângulo é %1.f centímetros cúbicoss.\n", V);

    system("\npause");
    return 0;
}
