#include <stdio.h>

int main()
{
    int ahorro = 0, dias = 365;
    printf("Programa que calcula el ahorro anual compuesto \n\n");
    for(int i = 1; i <= dias; i++){
        ahorro = ahorro + i;
        printf("En el dia %d tendrias ahorrado $ %d \n", i , ahorro);
    }
    return 0;
}
