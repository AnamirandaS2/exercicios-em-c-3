/*Elaborar um programa que leia sucessivamente valores
numéricos e apresente no final o somatório, a média e o
total de valores lidos. O programa deve ler os valores
enquanto o usuário estiver fornecendo valores positivos. Ou
seja, o programa deve parar quando o usuário fornecer um
valor negativo (menor que zero).*/

#include <stdio.h>

int main() {
    int valor;
    int somatorio = 0;
    int contador = 0;

    printf("Digite os valores (negativo para sair):\n");

    while (1) {
        scanf("%d", &valor);
        if (valor < 0) {
            break;  // Sai do loop quando for fornecido um valor negativo
        }

        somatorio += valor;
        contador++;
    }

    if (contador > 0) {
        double media = (double)somatorio / contador;

        printf("Total de valores lidos: %d\n", contador);
        printf("Somatório: %d\n", somatorio);
        printf("Média: %.2f\n", media);
    } else {
        printf("Nenhum valor válido foi fornecido.\n");
    }

    return 0;
}
