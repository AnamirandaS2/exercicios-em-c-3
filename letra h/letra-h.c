/* Escrever um programa que apresente como resultado a
potência de uma base qualquer elevada a um expoente
qualquer, ou seja, de BE, em que B é o valor da base e E o
valor do expoente. Considere apenas a entrada de valores
inteiros e positivos, ou seja, de valores naturais. Sugestão:
não utilize o formato “base ↑ expoente”, pois é uma solução
muito trivial. Use a técnica de laço, em que o valor da base
deve ser multiplicado o número de vezes determinado no
expoente. */

#include<stdio.h>
#include<math.h>

void potencia(){
    int r;
    int E;
    int B;

    printf("Insira uma base inteira e positiva: \n");
    scanf("%d", &B);
    printf("Insira um expoente inteiro e positivo: \n");
    scanf("%d", &E);

    for (int expoente = 0; expoente <= E ; expoente++)
    {        
        r = pow(B,E);

    }
    printf("%d elevado a %d é %d \n", B, E, r);

}

int main(){
    potencia();
    return 0;
}