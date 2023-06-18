/* Construir um programa que apresente todos os valores
numéricos divisíveis por 4 e menores que 200. */
#include<stdio.h>

int div4emenor200(){
    for (int i = 4; i < 200; i += 4)
    {
        printf("os números divisíveis por 4 e menores que 200: %d \n", i);
    }
}
int main(){
    int r = div4emenor200();
    printf("%d", r);
    return 0;
}