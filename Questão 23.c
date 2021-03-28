/******************************************************************************

Aluno: Matheus dos Anjos Santana
Curso: Desenvolvimento de Sistemas
Turma: 1º semestre - Noturno
Atividade: Avaliação pontuada 2
Questão: 01

*******************************************************************************/
#include <stdio.h>
int main()
{
    int idade=0, individuos=0, maior=0;
    printf("::::: Para parar o sistema, digite 0 :::::\n");
    printf("\n");
    do{
        printf("Qual a idade do habitante? \n");
        scanf("%d", &idade);
        if(maior<idade){
            maior=idade;
        }
        if((idade >=18)&&(idade<=35)){
            individuos++;
        }
    }while (idade!=0);
    printf("A mior idade entre os habitantes é: %d\n", maior);
    printf("A cidade tem %d habitantes com idade entre 18 e 35 anos", individuos);
    return 0;