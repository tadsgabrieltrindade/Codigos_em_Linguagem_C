#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
int i, R;
printf("\t\t\t\tCapítulo 5 - Letra A\n\n");
i = 15;
while((i >= 15) && (i <= 200)){
        R = i * i;
        printf("%i.\n", i, R);
        i++;
    }

 system("\npause\n");
    return 0;
}
