/******************************************************************************

Programa: Caucculadora de m�dias
Fun��o: Informar qual � a m�dia do aluno e a respectiva situa��o final.
Autor: Matheus dos Anjos Santana SSA T2
Data: 16/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
    float media, nota[3], soma = 0;
    int i, contador = 0;
    
    for (i=0; i<= 2; i++){
        contador = contador + 1;
        printf("Digite a %d� nota do aluno \n", contador);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma/contador;
    printf("A m�dia �: %.2f \n ", media);
    printf("\n");
    
    if (media==10){
        printf("SITUA��O: Aprovado com Maestria! \n\n");
    }else if (media>= 7){
        printf("SITUA��O: Aprovado! \n\n");
    }else 
        printf("SITUA��O: Reprovado! \n\n");
    
    system("pause");
    return 0;
}

