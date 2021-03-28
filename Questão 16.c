/******************************************************************************

Programa: Números Pares e Ímpares
Função: Apresentar todos os números Pares e Ímpares entre 1 e 10
Autor: Matheus dos Anjos Santana SSA T2
Data: 17/07/2020

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i, f=1, num[10], imp=0, par=0;
    for(i=0; i<10; i++){
        printf("Digite o %dº número: ", f);
        scanf("%d", &num[i]);
            if(num[i]%2==0){
            par = par + 1;
            }else
            imp = imp + 1;
            f = f + 1;
    }
    printf("_________________\n");
    printf("%d números são pares  \n", par);
    printf("%d números são ímpares  \n \n", imp);
system("pause");
return 0;
}

