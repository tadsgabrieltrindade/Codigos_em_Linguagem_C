#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char nome [15]; char sobrenome [20]; int i = 0; int sep;
  do{
  printf("\nDigite seu nome: ");
  scanf("%s", &nome[i]);
  printf("\nAgora digite seu sobrenome: ");
  scanf("%s", &sobrenome[i]);
  i++;
  for (sep = 1; sep<=60; sep++)
  printf("-");
  }while(i<=2);
  printf("\nOs nomes apresentados são: \n");
  for (i = 0; i <=2; i++){
    printf("\n%iº nome: %s %s", i, nome[i], sobrenome[i]);
    i++;
  }

    return 0;
}
