/******************************************************************************
Programa:C�lculador de M�dias
Fun��o: Informar qual a m�dia de um aluno e quanto ele precisa tirar na prova final/recupera��o
Autor: Matheus dos Anjos Santana SSA T2
Data: 07/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
float media, notaf;
char nome[80];
    printf("Qual o nome do aluno? \n");
    gets(nome);
    printf("Qual a m�dia do aluno? ");
    scanf("%f", &media);
    printf ("\n");
    notaf = (10-media);
    printf("Para conseguir a aprova��o, %s  precisa tirar %f na prova final", nome, notaf);
    printf("\n");
system("pause");
return 0;
}

