#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra O - Cap. 5");
    setlocale(LC_ALL, "Portuguese");
int i, fat, cont;
i = fat = cont = 1;

do{

while(cont<=10){
        if(!(i%2==0)){
    fat = fat * cont;
    cont++;
    printf("\n%i! = %i\n", i, fat);
    i++;
            }else{cont++; i++;}
}
}while(i<=10);

printf("\n\n");
system("\npause\n");
return 0;
}
