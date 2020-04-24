#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
  float N1, N2, N3, N4, NE, MD1, MD2;
int i = 1;
do{
        system("cls");
printf("\t\t\t\t\t Situação escolar do semestre \n");
printf("\n Digite sua primeira nota: \n>>> ");
scanf("%f", &N1);
printf("\n Digite sua segunda nota: \n>>> ");
scanf("%f", &N2);
printf("\n Digite sua terceira nota: \n>>> ");
scanf("%f", &N3);
printf("\n Digite sua quarta nota: \n>>> ");
scanf("%f", &N4);
    MD1 = ((N1+N2+N3+N4)/4);
        if (MD1>=7) {
            printf("\t\nAprovado! \n");
            printf("\tSua média foi de %.2f", MD1, ". \n");
        }else {
            printf("\nPor favor, informe sua nota do exame: \n>>> ");
            scanf("%f", &NE);
            MD2 = ((N1+N2+N3+N4+NE)/5);
                if (MD2>=5){
                    printf("\t\nAprovado em exame.\n");
                    printf("\t Sua média foi de %.2f", MD2, ". \n");
                }else{
                printf("\t Reprovado.\n");
                printf("\t Sua média foi de %.2f", MD2, ".\n");
                }

        }
    printf("\n\nDeseja fazer uma nova consulta? \nDigite (1) para Sim e (0) para Não. \n>>> ");
    scanf("%i", &i);


}while(i!=0);
        return 0;
}

