#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int candA, candB, candC, votosNulos, votosBrancos, votosValidos, qntEleitores;
candA = candB = candC = votosNulos = votosBrancos = votosValidos = qntEleitores = 0;

float percentualValidos, percentualA, percentualB, percentualC, percentualNulos, percentualBrancos;
percentualValidos = percentualA = percentualB = percentualC = percentualNulos = percentualBrancos = 0.0;

printf("Digite a quantidade de votos do candidato A: \n>>> ");
scanf("%i", &candA);
printf("\nDigite a quantidade de votos do candidato B: \n>>> ");
scanf("%i", &candB);
printf("\nDigite a quantidade de votos do candidato C: \n>>> ");
scanf("%i", &candC);
printf("\nDigite a quantidada de votos nulos: \n>>> ");
scanf("%i", &votosNulos);
printf("\nDigite a quantidade de votos em branco: \n>>> ");
scanf("%i", &votosBrancos);

votosValidos = (candA + candB + candC);
qntEleitores = votosValidos + votosNulos + votosBrancos;
percentualValidos = ((votosValidos * 100) / qntEleitores);
percentualA = ((candA * 100) / qntEleitores);
percentualB = ((candB * 100) / qntEleitores);
percentualC = ((candC * 100) / qntEleitores);
percentualNulos = ((votosNulos * 100) / qntEleitores);
percentualBrancos = ((votosBrancos * 100) / qntEleitores);

printf("\nA quantidade de eleitores foi de %i.\n", qntEleitores);
printf("\nO percentual de votos v�lidos em rela��o ao total foi de %1.f%%.\n", percentualValidos);
printf("\nO percentual de votos v�lidos do candidato A em rela��o ao total foi de %1.f%%.\n", percentualA);
printf("\nO percentual de votos v�lidos do candidato B em rela��o ao total foi de %1.f%%.\n", percentualB);
printf("\nO percentual de votos v�lidos do candidato C em rela��o ao total foi de %1.f%%.\n", percentualC);
printf("\nO percentual de votos nulos em rela��o ao total foi de %1.f%%.\n", percentualNulos);
printf("\nO percentual de votos em branco em rela��o ao total foi de %1.f%%.\n", percentualBrancos);






    system("\n\npause\n");
    return 0;
}
