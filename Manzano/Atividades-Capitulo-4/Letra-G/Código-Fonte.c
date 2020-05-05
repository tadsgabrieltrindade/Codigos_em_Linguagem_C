#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCapítulo 4 - Letra G\n\n");


int A, B, C, D, divA2, divA3, divB2, divB3, divC2, divC3, divD2, divD3;

printf("Digite um número: \n>>> ");
scanf("%i", &A);
printf("Digite outro número: \n>>> ");
scanf("%i", &B);
printf("Outro novamente: \n>>> ");
scanf("%i", &C);
printf("Digite mais um número: \n>>> ");
scanf("%i", &D);
divA2 = (A % 2);
divA3 = (A % 3);
divB2 = (B % 2);
divB3 = (B % 3);
divC2 = (C % 2);
divC3 = (C % 3);
divD2 = (D % 2);
divD3 = (D % 3);

    if (divA2==0 && divA3==0){
        if (divB2==0 && divB3==0){
            if (divC2==0 && divC2==0){
                if(divD2==0 && divD3==0){
                    printf("\nOs números divisíveis por 2 e 3 são %i, %i, %i e %i.\n", A, B, C, D);
                }else(
                      printf("\nOs números divisíveis por 2 e 3 são %i, %i, e %i.\n", A, B, C));
            }else{
                    if(divD2==0 && divD3==0){
                    printf("\nOs números divisíveis por 2 e 3 são %i, %i, e %i.\n", A, B, D);
                  }else
                        printf("\nOs números divisíveis por 2 e 3 são %i e %i.\n", A, B);
                        };
            }else{
                  if (divC2==0 && divC3==0){
                    if(divD2==0 && divD3==0){
                    printf("\nOs números divisíveis por 2 e 3 são %i e %i.\n", A, C);
                  }else{}
                  }else{
                        if(divD2==0 && divD3==0){
                           printf("\nOs números divisíveis por 2 e 3 são %i e %i.\n", A, D);
                        }else{
                              printf("\nO número que é divisível por 2 e 3 é %i.\n", A);
                            }
                            }
            }
    }else{
          if (divB2==0 && divB3==0){
            if(divC2==0 && divC3==0){
                if(divD2==0 && divD3==0){
            printf("\nOs números divisíveis por 2 e 3 são %i, %i e %i.\n", B, C, D);
          }else{}
          }else{
                if(divD2==0 && divD3==0){
                    printf("\nOs números divisíveis por 2 e 3 são %i e %i.\n", B, D);
                }else{
                      printf("\nO número que é divisível por 2 e 3 é %i.\n", B);
                        }
                }
          }else{
                if(divC2==0 && divC3==0){
                    if(divD2==0 && divD3==0){
                    printf("\nOs números divisíveis por 2 e 3 são %i e %i.\n", C, D);
                }else{
                      printf("\nO número que é divisível por 2 e 3 é %i.\n", C);
                        }
                }else{
                       if(divD2==0 && divD3==0){
                        printf("\nO número que é divisível por 2 e 3 é %i.\n", D);
                      }else{}
                        }
                }

        }

    system("\npause\n");
        return 0;

}
