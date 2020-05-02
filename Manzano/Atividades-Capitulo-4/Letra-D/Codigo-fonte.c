#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
  float N1, N2, N3, N4, NE, MD1, MD2;

printf("\t\t\t\tCapítulo 4 - Letra D\n\n");
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
            printf("\nAprovado!");
            printf("\nSua média foi de %.1f.\n\n", MD1);
        }else {
            printf("\nPor favor, informe sua nota do exame: \n>>> ");
            scanf("%f", &NE);
            MD2 = ((N1+N2+N3+N4+NE)/5);
                if (MD2>=5){
                    printf("\nAprovado em exame.");
                    printf("\nSua média foi de %1.f.\n\n", MD2);
                }else{
                printf("\nReprovado.");
                printf("\nSua média foi de %1.f.\n\n", MD2);
                }

        }




        system("\npause\n");
        return 0;

}
