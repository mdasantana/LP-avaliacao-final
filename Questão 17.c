/******************************************************************************

Programa: Soma Total
Fun��o: Apresentar a soma dos n�meros inteiros informados
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
    printf("Digite o %d� n�mero da soma: ", f);
    scanf("%f", &num);
    f = f + 1;
        if(num>=0){
            soma = soma + num;
        }
    }
    printf("\n");
    printf("A soma dos n�meros � igual a: %.2f \n", soma);
system("pause");
return 0;
}

