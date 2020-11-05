#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

void soma(int a, int b){
int r;
r=a+b;
printf("%i", r);
}

int main(){
    int num1, num2; num1 = num2 = 78;
    soma(num1, num2);
    return 0;
}
