/* Construir um programa que apresente a soma dos cem
primeiros números naturais (1 + 2 + 3 +...+ 98 + 99 + 100). */

#include<stdio.h>

int soma100(){
    int soma = 0;
    int i;
    for (i = 1; i <= 100; i++)
    {
         soma += i;
    }
    return soma;
    
}

int main(){
    int resultado = soma100();
    printf("%d", resultado);
    return 0;
}