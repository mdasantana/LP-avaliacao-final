/*
"Calculador de RCQ"
// Função : Calular a Relação Citura-Quadril
// Autor : Matheus dos Anjos Santana
// Data : 30/06/2020 
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
float	rcq, c, q;
char nome[80];

      printf("Bem-vindo, estou aqui para ajudar-lhe a calcular a sua Relacao Cintura Quadril (RCQ) \n ");
      printf("Qual o seu nome? \n");
	  gets(nome);
      printf("Bem, %s", nome);
	  printf(", preciso que me informe o tamanho da sua cintura, em cm \n");
      scanf ("%f", &c);
      printf("Agora me informe o tamanho do seu quadil, em cm \n");
      scanf ("%f", &q);
      rcq = (c / q);
      printf("%s",nome);
      printf (", o valor do seu RCQ e: %f ", rcq);
      printf ("\n");
      printf ("\n Agora veja a interpretação do seu RCQ:");
      printf ("\n ____________________________________________________");
      printf ("\n Risco de saude     Mulher            Homem");
      printf ("\n ____________________________________________________");
      printf ("\n Baixo              Inferior a 0,80   Inferior a 0,95");
      printf ("\n Moderado           0,81 a 0,85       0,96 a 1,0");
      printf ("\n Alto               Superior 0,86     Superior 1,0");
      printf ("\n ____________________________________________________");
      printf ("\n");
      system("pause");
      return 0;
}
