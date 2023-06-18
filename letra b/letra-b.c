/* Elaborar um programa que mostre os resultados da tabuada
de um número qualquer, a qual deve ser apresentada de
acordo com sua forma tradicional. */

#include<stdio.h>

int main(){
    int num;
    printf("Digite um número para descobrir sua tabuada: \n");
    scanf("%d", &num);

    for (int i = 0; i <= 10; i++)
    {
        int r = i * num;
        printf("%d x %d = %d \n",num,i,r);

    }
    
    return 0;
}
