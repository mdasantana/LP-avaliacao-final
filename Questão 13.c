/******************************************************************************

Programa: Calculador de Reajustes
Fun��o: Informa qual o reajuste e o novo valor de um funcion�rio
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
        printf("Digite o sal�rio do funcion�rio \n");
        scanf("%f", &salario);
        if(salario<=280){
            valorAumento = (salario*(aumento[3]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcion�rio ter� um aumento de %.0f porcento, referente a R$ %.2f \n", aumento[3], valorAumento);
            printf("O sal�rio do funcion�rio passar� de R$ %.2f para R$ %.2f \n", salario, novoSalario);
        }else if((salario>280)&&(salario<=700)){
        //sal�rios entre R$ 280,00 e R$ 700,00 como no anterior incluiu o 280 eu inclu� o 700
        //n�o estava especificado na quest�o, ent�o fiz por conta pr�pria
            valorAumento = (salario*(aumento[2]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcion�rio ter� um aumento de %.0f porcento, referente a R$ %.2f \n", aumento[2], valorAumento);
            printf("O sal�rio do funcion�rio passar� de R$ %.2f para R$ %.2f \n", salario, novoSalario); 
        }else if((salario>700)&&(salario<=1500)){ 
        //sal�rios entre R$ 700,00 e R$ 1500,00 como no anterior incluiu o 700 eu inclu� o 1500
        //n�o estava especificado na quest�o, ent�o fiz por conta pr�pria
            valorAumento = (salario*(aumento[1]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcion�rio ter� um aumento de %.0f porcento, referente a R$%.2f \n", aumento[1], valorAumento);
            printf("O sal�rio do funcion�rio passar� de R$%.2f para R$%.2f \n", salario, novoSalario);
        }else if (salario>1500){
            valorAumento = (salario*(aumento[0]/100));
            novoSalario = (salario + valorAumento);
            printf("O funcion�rio ter� um aumento de %.0f porcento, referente a R$%.2f \n", aumento[0], valorAumento);
            printf("O sal�rio do funcion�rio passar� de R$%.2f para R$%.2f \n", salario, novoSalario);
        }
        printf("\n");
        printf("Digite 0 caso deseje analisar um novo aumento ou 1 para finalizar. \n");
        printf("\n");
        scanf("%d", &i);
            
        }while (i == 0);
    system("pause");
    return 0;
}

