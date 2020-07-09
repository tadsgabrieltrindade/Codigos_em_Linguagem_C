#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
float SM, PR, NS, SUB;
SM = PR = NS = SUB = 0.0;

printf("Digite o valor do salário: \n>>> ");
scanf("%f", &SM);
printf("\nDigite o valor do reajuste: \n>>> ");
scanf("%f", &PR);

SUB = (SM * (PR/100));
NS = (SM - SUB);
printf("\nO novo salário é de R$%1.f\n", NS);
    system("\n\npause\n");
    return 0;
}
