#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int I = 1;
    int valDigitado = 0;

    printf("Informe a quantidade de vezes que vc quer que a instrução se repita: \n>>> ");
    scanf("%i", &valDigitado);

        while(I<=valDigitado){
            printf("\n%i\n", I);
            I = I + 1;
        }


    system("\n\npause");
return 0;
}
