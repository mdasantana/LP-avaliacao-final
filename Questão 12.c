/******************************************************************************

Programa: Decisor de compras.
Função: Dizer qual produto comprar com base na comparação dos preços.
Autor: Matheus dos Anjos Santana SSA T2
Data: 16/07/2020

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float preco[2], maior, menor;
    int i, contador=0;
    
    for (i=0; i<= 1; i++){
        contador = contador + 1;
        printf("Qual o preço do %dº produto? \n", contador);
        scanf("%f", &preco[i]);
    }
    
    if (preco[0]==preco[1]){
        printf("Os produtos são do mesmo valor \n");
    }else if (preco[0]>preco[1]){
        printf("O produto a ser comprado é o que custa R$% .2f \n", preco[1]);
    }else 
        printf("O produto que deve ser comprado é o que custa R$%.2f \n", preco[0]);
    
    system("pause");
    return 0;
}

