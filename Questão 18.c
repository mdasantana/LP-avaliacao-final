/******************************************************************************

Programa: Calculador de Idade
Função: Informar a média da idade e a quantidade de funcionários
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
        printf("Digite a idade do %dº funcionário: ", i);
        scanf("%d", &idade);
        if(idade<18){
            qndFuncionarios = qndFuncionarios - 1;
            printf("\n");
            printf("A %dª pessoa não pode ser funcionária, pois, é menor de idade \n", i);
            
        }else
            soma = soma + idade;
            qndFuncionarios = qndFuncionarios + 1;
            media = soma/qndFuncionarios;
        i = i + 1;
    }while(idade>=18);
    
    printf("\n");
    printf("A média de idade dos %d funcionários é de %.2f anos  \n", qndFuncionarios, media);
    printf("\n");

system("pause");
return 0;
}

