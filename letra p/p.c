/*Elaborar um programa que apresente os resultados da
soma e da média aritmética dos valores pares situados na
faixa numérica de 50 até 70.*/
#include<stdio.h>

int main(){
    int soma = 0;
    int media;
    int i = 0;
    for (int i = 50; i <= 70 ; i++)
    {
        if (i %2 == 0)
        {
            soma += i;
        }
        
    }
    if (i > 0)
    {
        int media = soma / i;
    }
    
    printf("A soma dos números pares de 50 a 70 é %d \n", soma);
    printf("A média entre os números pares de 50 a 70 é %d \n", media);

    return 0;
}