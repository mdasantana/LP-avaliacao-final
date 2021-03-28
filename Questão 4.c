/* 
Programa: Calculadora de Celsius
Função:Converter em Celsius uma temperatura em Fahrenheit
Autor: Matheus dos Anjos Santana - SSA T2
Data: 01/07/2020
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()

{

float celsius, fah;

printf ("Ola, vou te ajudar a saber quantos graus Celsius esta fazendo \n");
printf ("Preciso que me informe qual a temperatura em FAHRENHEIT esta fazendo \n");
scanf ("%f", &fah);
celsius = (fah - 32) / (1.8);
printf ("\n A temperatura em Celsius e %f ", celsius);
printf ("\n");

system ("pause");
return 0;
}
