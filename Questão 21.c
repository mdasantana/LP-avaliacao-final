/******************************************************************************

Programa: Somar n�meros
Fun��o: Solicitar 5 n�meros em 2 sequ�ncias, soma-los e apresentar o resultado.
Autor: Matheus dos Anjos Santana SSA T2
Data: 06/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int f=0, i=0, j=0;
    float numA[5], numB[5], somaAB[5];
    
    setlocale(LC_ALL,"portuguese");
    for(i=0; i<5; i++){
    f = f + 1;
    printf("Digite o %d� n�mero a sequ�ncia A: ", f);
    scanf("%f", &numA[i]);}
    
    f=0;
printf("********************************* \n");

    for(j=0; j<5; j++){
    f = f + 1;
    printf("Digite o %d� n�mero a sequ�ncia B: ", f);
    scanf("%f", &numB[j]);}
    
printf("********************************* \n");
printf("O resultado da soma dos n�meros das sequ�ncias A e B �: \n");

    for(f=0;f<5; f++){
    somaAB[f] = numA[f]+numB[f];
    printf("%.2f + %.2f = %.2f \n", numA[f], numB[f], somaAB[f]);}
    
system("pause");
return 0;
}

