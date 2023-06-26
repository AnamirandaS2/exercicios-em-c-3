/* Elaborar um programa que apresente os valores de
conversão de graus Celsius em graus Fahrenheit, de dez
em dez graus, iniciando a contagem em dez graus Celsius e
finalizando em cem graus Celsius. O programa deve
apresentar os valores das duas temperaturas. */

#include<stdio.h>

void conversao(){

int celsius = 10;
int fahrenheit;

for (celsius = 10; celsius <= 100 ; celsius+=10){
    fahrenheit = (celsius * 1.8) + 32;
    printf("C: %d, F: %d \n", celsius, fahrenheit);
}
}

int main(){
    conversao();
    return 0;
}