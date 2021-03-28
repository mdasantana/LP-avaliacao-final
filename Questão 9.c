/******************************************************************************
Programa: Divisor de Números
Função:Informar se um determinado número é divisivel por 3 e 7
Autor: Matheus dos Anjos Santana - SSA T2
Data: 06/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
int num, div3, div7;
    printf(" Bem-vindo, estou aqui para informar a divisão de um número  por 3 e 7 é inteira em ambos \n");
    printf(" Qual o número? ");
    scanf("%d", &num);
    div3 = num%3; // supus que contaria só contária de o resultado da divisão fosse 0
    div7 = num%7;
    if ((div3==0) && (div7==0)) { // testado com 21 e 42
        printf (" O valor informado é divisível");
    }else { // testado com 10, 7 e 3
        printf (" O valor não é divisível, pois o resultado não é inteiro \n");
        printf (" O resto da divisão por 3 é: %d\n", div3);
        printf (" O resto da divisão por 7 é: %d\n", div7);    }
    return 0;
}

