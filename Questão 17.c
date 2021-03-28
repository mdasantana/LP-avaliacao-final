/******************************************************************************

Programa: Soma Total
Função: Apresentar a soma dos números inteiros informados
Autor: Matheus dos Anjos Santana SSA T2
Data: 17/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int  f=1;
    float num, soma;
    while(num>=0){
    printf("Digite o %dº número da soma: ", f);
    scanf("%f", &num);
    f = f + 1;
        if(num>=0){
            soma = soma + num;
        }
    }
    printf("\n");
    printf("A soma dos números é igual a: %.2f \n", soma);
system("pause");
return 0;
}

