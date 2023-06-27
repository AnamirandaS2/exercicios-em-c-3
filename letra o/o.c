/*Construir um programa que apresente como resultado a
fatorial dos valores ímpares situados na faixa numérica de 1
até 10.*/
#include<stdio.h>
#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    printf("Fatorial dos valores ímpares de 1 a 10:\n");

    for (int i = 1; i <= 10; i += 2) {
        printf("Fatorial de %d: %d\n", i, fatorial(i));
    }

    return 0;
}

