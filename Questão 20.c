/******************************************************************************

Programa: N�mero Maior.
Fun��o: Solicitar 10 n�meros i informar qual � o maior e qual a sua posi��o.
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
        printf("Digite o %d� n�mero: ", f);
        scanf("%f", &num[i]);
        if(num[i]>maior){
            maior = num[i];
            posicao = f;
        }
        f = f + 1;
    }
    printf("\n");
    printf("O maior n�mero � %.2f, e ele est� na %d� posis�o. \n", maior, posicao);
    system("pause");
    return 0;
}
