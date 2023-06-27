/* Elaborar um programa que leia quinze valores numéricos
inteiros e no final apresente o somatório da fatorial de cada
valor lido. */
#include<stdio.h>


int fatorial(int n){
    int resultado = 1;
    for (int i = n; i >= 1; i--)
    {
        resultado *= i;
    }
    return resultado;
}

void ler15n(){
    int ler;
    double somatorio = 0;
    for (int cont = 1; cont <= 15; cont++){

        //ler os números
        printf("Digite o %d número: \n", cont);
        scanf("%d", &ler);

        //fatorial
        int fatorial_num = fatorial(ler);
        somatorio += fatorial_num;
        
    }

    printf(" O somatório da fatorial de cada valor lido: %.0f \n", somatorio);
    
}  

int main(){
    ler15n();
    return 0;
}

