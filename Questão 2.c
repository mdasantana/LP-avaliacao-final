/* 
Programa:  Calculadora de IMC
Função :Calcular o IMC 
Autor: Matheus dos Anjos Santana
Data: 30/06/2020
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	
float h,p, imc;
char nome[80];


      printf ("Bem-vindo, estou aqui para ajudar-lhe a calcular o IMC \n");
      printf ("Qual o seu nome? \n");
      gets (nome);
      printf ("Bem, %s", nome);
      printf (", agora me informe o seu peso \n");
      scanf ("%f", &p);
      printf("%s",nome);
      printf (", preciso que me informe a sua altura \n");
      scanf ("%f", &h);
      imc = p / pow(h,2);
      printf ("%s",nome);
	  printf (",  o valor do seu IMC e:  %f \n",imc);
      printf ("");
      printf ("Agora veja a interpretacao do seu IMC: \n");
      printf ("************************************************** \n");
      printf ("IMC             CLASSIFICACAO    GRAU DE OBESIDADE \n");
      printf ("************************************************** \n");
      printf ("MENOR QUE 18,5     MAGREZA             0 \n");
      printf ("MENOR QUE 18,5     MAGREZA             0 \n");
      printf ("ENTRE 18,5 E 24,9  NORMAL              0 \n");
      printf ("ENTRE 25,0 E 29,9  SOBREPESO           I\n" );
      printf ("ENTRE 30,0 E 39,9  OBESIDADE           II\n");
      printf ("MAIOR QUE 40,0     OBESIDADE GRAVE     III\n");
      printf ("************************************************** \n");
system ("pause");
return 0;
}
