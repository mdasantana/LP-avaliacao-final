/******************************************************************************
Programa: Divisor de N�meros
Fun��o:Informar se um determinado n�mero � divisivel por 3 e 7
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
    printf(" Bem-vindo, estou aqui para informar a divis�o de um n�mero  por 3 e 7 � inteira em ambos \n");
    printf(" Qual o n�mero? ");
    scanf("%d", &num);
    div3 = num%3; // supus que contaria s� cont�ria de o resultado da divis�o fosse 0
    div7 = num%7;
    if ((div3==0) && (div7==0)) { // testado com 21 e 42
        printf (" O valor informado � divis�vel");
    }else { // testado com 10, 7 e 3
        printf (" O valor n�o � divis�vel, pois o resultado n�o � inteiro \n");
        printf (" O resto da divis�o por 3 �: %d\n", div3);
        printf (" O resto da divis�o por 7 �: %d\n", div7);    }
    return 0;
}

