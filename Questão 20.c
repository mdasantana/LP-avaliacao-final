/******************************************************************************

Programa: Número Maior.
Função: Solicitar 10 números i informar qual é o maior e qual a sua posição.
Autor: Matheus dos Anjos Santana SSA T2
Data: 06/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int f=1, i, posicao;
    float num[10], maior=0;
    
    setlocale(LC_ALL,"portuguese");
    for(i=0; i<10;i++){
        printf("Digite o %dº número: ", f);
        scanf("%f", &num[i]);
        if(num[i]>maior){
            maior = num[i];
            posicao = f;
        }
        f = f + 1;
    }
    printf("\n");
    printf("O maior número é %.2f, e ele está na %dª posisão. \n", maior, posicao);
    system("pause");
    return 0;
}
