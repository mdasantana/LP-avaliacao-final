/*
Programa: "Sorvete"
Função :   Calcular a velocidade final de um objeto.
Autor :    Matheus dos Anjos Santana - SSA T2
Data : 01/07/2020

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()

{

int posicao_final, posicao_inicial, velocidade, tempo;
//char nome[80];pensei em utilizar mas desisti no caminho

printf (" Bem-vindo, estou aqui para ajudar-lhe a caucular qual a posicao de um objeto \n");
printf (" Todas as informacoes devem ser dadas de acordo com o Sistema Internacional, em m/s. Informar valores sem casas decimais\n");
printf (" Agora me informe qual a posicao inicial do objeto (m) \n");
scanf ("%d", &posicao_inicial);
printf (" Qual a velocidade do objeto? (m/s) \n");
scanf ("%d", &velocidade);
printf (" Qual o tempo decorrido entre o ponto de partida e o ponto final? (s) \n");
scanf ("%d", &tempo);
posicao_final = (posicao_inicial + velocidade * tempo);
printf ("\n");
printf (" A posicao final do objeto e %d ", posicao_final);
printf ("m/s \n");
printf (" \n");
printf (" A formula utilizada foi: S = So + V * T \n");
printf (" Parametros utilizados: \n");
printf (" Posicao Inicial: %d \n", posicao_inicial);
printf (" Velocidade: %d \n", velocidade);
printf (" Tempo: %d \n", tempo);
printf (" \n ");

system ("pause");
return 0;
}
