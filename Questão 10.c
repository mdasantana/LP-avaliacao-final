/******************************************************************************

Programa: Qual o maior n�mero?
Fun��o: Informar qual � o maior n�mero da sequ�ncia
Autor: Matheus dos Anjos Santana SSA T2
Data: 06/07/2020 e 07/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL,"portuguese");
int num1, num2, num3;

    printf("Digite os 3 valores: \n");
    scanf ("%d %d %d", &num1, &num2, &num3);
    if (num1<num2&&num1<num3){
        printf("Os maiores n�meros s�o: \n");
        printf("%d\n", num2);
        printf("%d\n", num3);
    }else if (num2<num1&&num2<num3){
        printf("Os maiores n�meros s�o: \n");
        printf("%d\n", num1);
        printf("%d\n", num3);
    }else if(num3<num1&&num3<num2){
        printf("Os maiores n�meros s�o: \n");
        printf("%d\n", num1);
        printf("%d\n", num2);
    }else if (num1==num2==num3){
        printf("Os valores s�o iguais \n");}

system ("pause");
return 0;
}
