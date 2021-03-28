/******************************************************************************

Programa: Calculador de Reajustes
Função: Informa qual o reajuste e o novo valor de um funcionário
Autor: Matheus dos Anjos Santana SSA T2
Data: 16/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario, novoSalario, valorAumento, aumento[4]={5, 10, 15, 20};
    int i = 0;
    
    do {
        printf("Digite o salário do funcionário \n");
        scanf("%f", &salario);
        if(salario<=280){
            valorAumento = (salario*(aumento[3]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcionário terá um aumento de %.0f porcento, referente a R$ %.2f \n", aumento[3], valorAumento);
            printf("O salário do funcionário passará de R$ %.2f para R$ %.2f \n", salario, novoSalario);
        }else if((salario>280)&&(salario<=700)){
        //salários entre R$ 280,00 e R$ 700,00 como no anterior incluiu o 280 eu incluí o 700
        //não estava especificado na questão, então fiz por conta própria
            valorAumento = (salario*(aumento[2]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcionário terá um aumento de %.0f porcento, referente a R$ %.2f \n", aumento[2], valorAumento);
            printf("O salário do funcionário passará de R$ %.2f para R$ %.2f \n", salario, novoSalario); 
        }else if((salario>700)&&(salario<=1500)){ 
        //salários entre R$ 700,00 e R$ 1500,00 como no anterior incluiu o 700 eu incluí o 1500
        //não estava especificado na questão, então fiz por conta própria
            valorAumento = (salario*(aumento[1]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcionário terá um aumento de %.0f porcento, referente a R$%.2f \n", aumento[1], valorAumento);
            printf("O salário do funcionário passará de R$%.2f para R$%.2f \n", salario, novoSalario);
        }else if (salario>1500){
            valorAumento = (salario*(aumento[0]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcionário terá um aumento de %.0f porcento, referente a R$%.2f \n", aumento[0], valorAumento);
            printf("O salário do funcionário passará de R$%.2f para R$%.2f \n", salario, novoSalario);
        }
        printf("\n");
        printf("Digite 0 caso deseje analisar um novo aumento ou 1 para finalizar. \n");
        printf("\n");
        scanf("%d", &i);
            
        }while (i == 0);
    system("pause");
    return 0;
}

