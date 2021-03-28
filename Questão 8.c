/******************************************************************************

Programa: Calculador da soma dos 20 primeiros números inteiros
Função: Calcular a soma dos 20 primeiro números inteiro
Autor: Matheus dos Anjos Santana SSA - T2
Data: 09/07/2020

*******************************************************************************/

#include <stdio.h>

int main()
{
int i=1, calculo=0;
char resultado[256]="0";
char novoResultado[256];

	for(i = 1; i <= 20; i++){
	    calculo = calculo + i;
	    snprintf(novoResultado, sizeof(resultado)-1,"%s + %d", resultado, i);
	    snprintf(resultado, sizeof(novoResultado)-1,"%s", novoResultado);
		printf("%s = %d\n", resultado, calculo);
	}
	system("pause");
	return 0;
}

