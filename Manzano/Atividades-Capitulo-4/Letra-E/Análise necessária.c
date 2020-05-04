#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCapítulo 4 - Letra E\n\n");

float A, B, C, D, X1, X2;
A = B = C = D = X1 = X2 = 0.0;
printf("Digite o coeficiente A: \n>>> ");
scanf("%f", &A);
printf("\nDigite o coeficiente B: \n>>> ");
scanf("%f", &B);
printf("\nDigite o coeficiente C: \n>>> ");
scanf("%f", &C);
D = ((pow(B, 2)) - (4 * A * C));
    if (D < 0){
        printf("\nSeu delta é negativo, logo não tem raiz real.\n");
    }else{
        if (D == 0){
            X1 = (-(B) / (2*A));
            printf("\nSeu delta é igual a zero, logo ele tem uma raiz real: X1=%.2f.\n", X1);
        }else{
            X1 = ((-(B) + (pow(D, 1/2))) / (2*A));
            X2 = ((-(B) - (pow(D, 1/2))) / (2*A));
            printf("\nSeu delta é maior que zero, logo tem duas raízes reais: X1=%.2f e X2=%.2f.\n", X1,X2);
        }
    }


        system("\npause\n");
        return 0;

}
