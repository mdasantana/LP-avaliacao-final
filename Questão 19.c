/******************************************************************************

Programa: N�meros �mpares.
Fun��o: Receber dez n�meros inteiros e apresentar os n�meros �mpares.
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
        printf("Digite o %d� n�mero: ", f);
        scanf("%d", &num[i]);
        f = f + 1;
    }
    printf("\n");
    printf("Os n�meros �mpares s�o: \n");
    for(i=0;i<10;i++){
        if(num[i]%2 != 0){
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
