/******************************************************************************

Programa: Decisor de compras.
Fun��o: Dizer qual produto comprar com base na compara��o dos pre�os.
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
        printf("Qual o pre�o do %d� produto? \n", contador);
        scanf("%f", &preco[i]);
    }
    
    if (preco[0]==preco[1]){
        printf("Os produtos s�o do mesmo valor \n");
    }else if (preco[0]>preco[1]){
        printf("O produto a ser comprado � o que custa R$% .2f \n", preco[1]);
    }else 
        printf("O produto que deve ser comprado � o que custa R$%.2f \n", preco[0]);
    
    system("pause");
    return 0;
}

