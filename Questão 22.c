/******************************************************************************

Programa: Buscar números
Função: Solicitar 9 números e armazenar numa matriz 3x3 e depois localizar um número com base nela.
Autor: Matheus dos Anjos Santana SSA T2
Data: 06/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int f=0, i=0, j=0;
    float num[3][3], numDigitado;
    setlocale(LC_ALL,"portuguese");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            f = f + 1;
        printf("Digite o %dº número: ", f);
        scanf("%f", &num[i][j]);
        }
    }
printf("********************************* \n");
printf("Digite um número qualquer \n");
scanf("%f", &numDigitado);
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(numDigitado == num[i][j]){
                printf("O número foi encontrado! Ele está na posição %dx%d da Matriz \n", j, i);
                break;
            /*}else{
                printf("O número não faz parte da Matriz \n");
                break;
                break;
            } EU TENTEI FAZER ESSE COMANDO MAS REPETIA 6 VEZES, EU COLOQUEI O BREAK E REPETIU APENAS 3
            TENTEI, ENTÃO, COLOCAR OUTRO BREAK, MAS MESMO ASSIM CONTINUOU REPETINDO 3 VEZES.
            */
            }
        }
    }
system("pause");
return 0;
}

