/*
Programa: "Conversor em Milhas"
Função :   Converter valores em Km/h para M/h
Autor :    Matheus dos Anjos Santana - SSA T2
Data : 01/07/2020

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    
float valor_km, valor_milhas;

printf (" Ola, estou aqui para te ajudar a converter Km para Milhas por hora \n");
printf (" Para isso, me informe a velocidade do veiculo, em Km \n");
scanf ("%f", &valor_km);

while (valor_km < 0){
    printf (" ERRO: valor informado e negativo \n");
    printf (" Informe um outro numero \n");
    scanf ("%f", &valor_km);
                    }

if (valor_km >= 0){
    valor_milhas = (valor_km / 1.61);
printf ("O veiculo esta a %f ", valor_milhas);
printf ("Mph \n");
                }

system ("pause");
return 0;
}
