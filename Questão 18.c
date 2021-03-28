/******************************************************************************

Programa: Calculador de Idade
Fun��o: Informar a m�dia da idade e a quantidade de funcion�rios
Autor: Matheus dos Anjos Santana SSA T2
Data: 17/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i=1, qndFuncionarios=0, idade=0, soma=0;
    float media=0;
    do{
        printf("Digite a idade do %d� funcion�rio: ", i);
        scanf("%d", &idade);
        if(idade<18){
            qndFuncionarios = qndFuncionarios - 1;
            printf("\n");
            printf("A %d� pessoa n�o pode ser funcion�ria, pois, � menor de idade \n", i);
            
        }else
            soma = soma + idade;
            qndFuncionarios = qndFuncionarios + 1;
            media = soma/qndFuncionarios;
        i = i + 1;
    }while(idade>=18);
    
    printf("\n");
    printf("A m�dia de idade dos %d funcion�rios � de %.2f anos  \n", qndFuncionarios, media);
    printf("\n");

system("pause");
return 0;
}

