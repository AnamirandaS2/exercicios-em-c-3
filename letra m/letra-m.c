/*Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatório e a média dos valores lidos.*/
#include<stdio.h>

int soma(int valores[]){
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += valores[i];
    }
    return soma;
}

void ler10(){
    int valores[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° número: \n", i + 1);
        scanf("%d", &valores[i]);
    }

    int total = soma(valores);
    double media = (double) total / 10;

    printf(" %.2f é a média dos valores \n", media);
    printf("%d é a soma dos valores",total);
}

int main(){
    ler10();
    return 0;
}