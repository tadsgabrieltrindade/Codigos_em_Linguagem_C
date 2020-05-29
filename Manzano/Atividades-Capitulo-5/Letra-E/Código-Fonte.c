#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\t\t\t\tCapítulo 5 - Letra D\n\n");

int i=0;
int R=0;
    do{
        for(i; !(i % 2 == 0); i++){
            printf("\n%i", i);
        }
    i++;
    }while(i <=20);
printf("\n");
system("\n\n\n\tpause\n");
}
