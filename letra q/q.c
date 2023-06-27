/*Escrever um programa que possibilite calcular a área total
em metros de uma residência com os cômodos sala,
cozinha, banheiro, dois quartos, área de serviço, quintal,
garagem, entre outros que podem ser fornecidos ao
programa. O programa deve solicitar a entrada do nome, da
largura e do comprimento de um determinado cômodo. Em
seguida, deve apresentar a área do cômodo lido e também
uma mensagem solicitando ao usuário a confirmação de
continuar calculando novos cômodos. Caso o usuário
responda “NÃO”, o programa deve apresentar o valor total
acumulado da área residencial.*/

#include<stdio.h>

int main(){
    int largura;
    int comprimento;
    char comodo[50];
    int areaTotal = 0;
    int continuar;

    printf("Você deseja calcular a área de um comodo? Digite 1 para sim e 0 para não \n");
    scanf("%d", &continuar);
    while (continuar == 1)
    {
        printf("Qual é o nome do comodo? \n");
        scanf("%s", comodo);

        printf("Qual é a largura do comodo em metros? \n");
        scanf("%d", &largura);

        printf(" Qual é o comprimento do comodo em metros? \n");
        scanf("%d", &comprimento);

        int areaComodo = largura * comprimento;

        areaTotal += areaComodo;

        printf("A área do comodo %s é %d m2 \n", comodo, areaComodo);


        printf("Você deseja calcular a área de um comodo? Digite 1 para sim e 0 para não \n");

        scanf("%d", &continuar);

        if (continuar != 1)
        {
            break;
        }
        
    }

    printf(" \nÁrea total acumulada: %d m2 \n ", areaTotal);   

    return 0;
}

