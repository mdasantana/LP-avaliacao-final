/******************************************************************************

Programa: Números Ímpares.
Função: Receber dez números inteiros e apresentar os números ímpares.
Autor: Matheus dos Anjos Santana SSA T2
Data: 06/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int f=1, i, num[10];
    
    setlocale(LC_ALL,"portuguese");
    for(i=0; i<10;i++){
        printf("Digite o %dº número: ", f);
        scanf("%d", &num[i]);
        f = f + 1;
    }
    printf("\n");
    printf("Os números ímpares são: \n");
    for(i=0;i<10;i++){
        if(num[i]%2 != 0){
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
