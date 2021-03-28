/******************************************************************************

Programa: Leitor de n�meros
Fun��o: Ler e informa a m�dia e a soma de determinada sequ�ncia n�merica
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
        printf("Informe o %d� n�mero: ", f);
        scanf("%f", &num);
        soma = soma + num;
        f = f + 1;
    }
    media = soma/(f-1);
    printf("\n");
    printf("A soma dos n�meros � igual a: %.2f \n", soma);
    printf("A m�dia dos n�meros �: %.2f \n", media);
    system("pause");
    return 0;
}
