/******************************************************************************
Programa:Cálculador de Médias
Função: Informar qual a média de um aluno e quanto ele precisa tirar na prova final/recuperação
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
    printf("Qual a média do aluno? ");
    scanf("%f", &media);
    printf ("\n");
    notaf = (10-media);
    printf("Para conseguir a aprovação, %s  precisa tirar %f na prova final", nome, notaf);
    printf("\n");
system("pause");
return 0;
}

