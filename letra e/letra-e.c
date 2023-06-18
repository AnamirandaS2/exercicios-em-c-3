/* Elaborar um programa que apresente todos os valores
numéricos inteiros ímpares situados na faixa de 0 a 20. */
#include<stdio.h>

void impar(){
    printf("Os números ímpares de 0 a 20: ");
    int i = 1;
    for ( i = 1; i <= 20; i ++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }
}

int main(){
    impar();
    return 0;
}