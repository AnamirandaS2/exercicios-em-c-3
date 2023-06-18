/* Elaborar um programa que apresente o somatório dos
valores pares existentes na faixa de 1 até 500. */

#include<stdio.h>

int somaPar500(){
    int soma = 0;
    for (int i = 1; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
        
    }
    return soma;
}

int main(){
    int r = somaPar500();
    printf("A soma dos pares até 500 é: %d \n", r);
    return 0;
}
