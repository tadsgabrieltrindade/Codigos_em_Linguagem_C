#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main (){
    printf("\t\t\t\tLetra P - Cap. 5");
    setlocale(LC_ALL, "Portuguese");

int i, m, s;
m = s = 0;
i = 50;
    do{
        if (i%2==0){
            s = i + s;
            m = s / 2;
            i++;
        }else{i++;}
    }while(i<=70);

    printf("\nA soma � %i e a m�dia � %i.\n", s, m);
printf("\n\n");
system("\npause\n");
return 0;
}
