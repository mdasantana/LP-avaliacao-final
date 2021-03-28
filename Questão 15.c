/******************************************************************************

Programa: Números Pares
Função: Apresentar todos os números pares entre 1 e 100
Autor: Matheus dos Anjos Santana SSA T2
Data: 17/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguse");
    int num=0 , i;
    for(i=0; i<100; i++){
        num = num + 1;
        if(num%2==0)
        printf("%d \n", num);
    }
    system("pause");
    return 0;
}
