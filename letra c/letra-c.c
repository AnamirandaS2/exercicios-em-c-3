/* Construir um programa que apresente a soma dos cem
primeiros números naturais (1 + 2 + 3 +...+ 98 + 99 + 100). */

#include<stdio.h>

int main(){
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++)
    {
        soma += i;
    }
    printf("A soma dos 100 primeiros números naturais é %d", soma);
    return 0;
}