/* Elaborar um programa que apresente o somatório dos
valores pares existentes na faixa de 1 até 500. */

#include<stdio.h>
int main(){
    int num;
    int soma = 0;
    for (int i = 0; i <= 500; i++)
    {
        if (i%2 == 0)
        {
            soma += i;

        }
        
        
    }
    printf("%d",soma);
    return 0;
    
}