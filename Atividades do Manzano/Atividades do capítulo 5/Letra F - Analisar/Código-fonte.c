#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main () {
    setlocale(LC_ALL, "portuguese" );
    printf("\t\t\t\tLetra F, Cap. 5\n\n");
int i = 1;
printf("\nOs valores que são divisíveis por 4 e menores que 200 são:\n");
    do {
        for (i; i % 4 == 0; i++){
            printf("\n%i\n", i);
        }
        i++;
    }while (i < 200);

system("\npause\n");


}
