#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra O - Cap. 5");
    setlocale(LC_ALL, "Portuguese");

int i, fat, cont; i = fat = cont = 1;
    while(i<=10){
        if(!(i % 2 == 0)){
                while(cont<=i){
                fat = fat * cont; cont++;}
            printf("\n%i! = %i.\n\n", i, fat);
            i++; fat = cont = 1;
        }else
        {i++; fat = cont = 1;}
    }
system("\npause\n");
return 0;
}
