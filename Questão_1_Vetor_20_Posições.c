/******************************************************************************

ALUNO: MATHEUS DOS ANJOS SANTANA
TURMA: DESENVOLVIMETO DE SISTEMAS - NOTURNO
QUEST�O: 1� QUEST�O

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int preencher(int *valor){
    int i;
    for(i=0;i<20;i++){
        printf("Digite o %d� valor: ", i+1);
        scanf("%d", &valor[i]);
    }
}

int acimaDez(int *valor){
    int i, contador=0;
    for(i=0;i<20;i++){
        if(valor[i]>10){
            contador++;
        }
    }
    return contador;
}

int menor(int *valor){
    int i, menor;
    for(i=0;i<20;i++){
        if(i==0){
            menor = valor[i];
        }else if(valor[i]<menor){
            menor = valor[i];
        }
    }
    return menor;
}

int parImpar(int *valor){
    int i;
    for(i=0;i<20;i++){
        if((valor[i]%2)!=0){
            printf("O valor %d � �mpar \n", valor[i]);
        }else{
            printf("O valor %d � par \n", valor[i]);
        }
    }
}

int vindoDoMain(int numero, int *valor){
    int i, contador=0;
    for(i=0;i<20;i++){
        if(valor[i]>numero){
            contador++;
        }
    }
    return contador;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[20], i, numeroMain;
    preencher(numeros);
    printf("\n");
    printf("A quantidade de n�meros acima de dez s�o: %d \n", acimaDez(numeros));
    printf("O menor valor do vetor �: %d \n", menor(numeros));
    parImpar(numeros);
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numeroMain);
    printf("A quantidade de n�meros acima de %d �: %d \n\n", numeroMain, vindoDoMain(numeroMain, numeros));
    return 0;
}
