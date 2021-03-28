/******************************************************************************

Programa: Leitor de números
Função: Ler e informa a média e a soma de determinada sequência númerica
Autor: Matheus dos Anjos Santana SSA T2
Data: 16/07/2020

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float num, soma=0, media;
    int i=0, f=1;
    for(i = 0; i<50; i++){
        printf("Informe o %dº número: ", f);
        scanf("%f", &num);
        soma = soma + num;
        f = f + 1;
    }
    media = soma/(f-1);
    printf("\n");
    printf("A soma dos números é igual a: %.2f \n", soma);
    printf("A média dos números é: %.2f \n", media);
    system("pause");
    return 0;
}
