/* Elaborar um programa que mostre os resultados da tabuada
de um número qualquer, a qual deve ser apresentada de
acordo com sua forma tradicional. */

#include<stdio.h>

int main(){
int num;

printf("Digite um número qualquer: ");
scanf("%d", &num);

printf("Tabuada do %d: \n", num);

for ( int i = 1; i <= 10; i++)
{
    int resultado = i * num;
    printf("%d x %d = %d \n",num,i, resultado);
}
return 0;

}