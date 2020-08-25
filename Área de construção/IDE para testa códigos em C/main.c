#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCapítulo 4 - Letra E\n\n");

float A, B, C, delta, x1, x2;
A = B = C = delta = x1 = x2 = 0.0;
printf("Digite o coeficiente A: \n>>> ");
scanf("%f", &A);
printf("\nDigite o coeficiente B: \n>>> ");
scanf("%f", &B);
printf("\nDigite o coeficiente C: \n>>> ");
scanf("%f", &C);
delta = ((pow(B, 2)) - (4 * A * C));
    if (delta < 0){
        printf("\nSeu delta é negativo, logo não tem raiz real.\n");
    }else{
        if (delta == 0){
            x1 = (-(B) / (2*A));
            printf("\nSeu delta é igual a zero, logo ele tem uma raiz real: x1=%.2f.\n", x1);
        }else{
            x1 = (((-(B)) + (pow(delta, 0.5))) / (2 * A));
            x2 = (((-(B)) - (pow(delta, 0.5))) / (2 * A));
            printf("\nSeu delta é maior que zero, logo tem duas raízes reais: x1=%.2f e x2=%.2f.\n", x1,x2);
        }
    }


        system("\npause\n");
        return 0;

}
