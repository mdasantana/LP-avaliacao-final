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
float nota1, nota2, media;
char nome[80];
    printf("Qual o nome do aluno? \n");
    gets(nome);
    printf("Quais as notas do aluno? ");
    scanf("%f %f", &nota1, &nota2);
    printf ("\n");
    media = (nota1+nota2)/2;
    if (media >= 6){
        printf("Parabéns, %s, você foi aprovado! A sua média é: %f\n", nome, media);
    }else{
        printf("Ah, que pena, %s, infelizmente você está em recuperação! A sua média final foi de: %f\n", nome, media);}

    system("pause");
    return 0;
}
