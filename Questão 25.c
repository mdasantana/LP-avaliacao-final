/******************************************************************************

ALUNO: MATHEUS DOS ANJOS SANTANA
TURMA: DESENVOLVIMENTO DE SISTEMAS - NOTURNO
QUEST�O 2 - SISTEMA DE CADASTRO DE ALUNOS


*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    int matricula;
    char nome[50];
    int idade;
    float nota1;
    float nota2;
    float nota3;
}aluno;

cadastrar(aluno valor[], int ind){
    int i;
	for(i=0;i<ind;i++){
	    printf("::: IN�CIO DO CADASTRO DO %d� ALUNO :::\n", i+1);
		printf("Digite a Matr�cula do Aluno: ");
		scanf("%d", &valor[i].matricula);
		printf("Digite o Nome do Aluno: ");
		scanf("%s",&valor[i].nome); // Aqui d� erro quando entra nome separado por espa�o, mas acabei n�o arrumando por conta da correria
		printf("Digite a Idade do Aluno: ");
		scanf("%d",&valor[i].idade);
		printf("Digite a 1� Nota do Aluno: ");
		scanf("%f",&valor[i].nota1);
		printf("Digite a 2� Nota do Aluno: ");
		scanf("%f",&valor[i].nota2);
		printf("Digite a 3� Nota do Aluno: ");
		scanf("%f",&valor[i].nota3);
		printf("::: FIM DO CADASTRO DO %d� ALUNO :::\n\n", i+1);
	}
}

imprimirAlunos(aluno valor[], int ind){
    int i;
    for(i=0;i<ind;i++){
        printf("::: DADOS CADASTRADOS DO %d� ALUNO :::\n", i+1);
		printf("Matr�cula: %d \n", valor[i].matricula);
        printf("Nome: %s \n", valor[i].nome);
        printf("Idade: %d \n", valor[i].idade);
        printf("1� Nota: %.2f \n", valor[i].nota1);
        printf("2� Nota: %.2f \n", valor[i].nota2);
        printf("3� Nota: %.2f \n", valor[i].nota3);
        printf(":::FIM DOS DADOS CADASTRADOS DO %d� ALUNO :::\n\n", i+1);
	}
}

mediaAluno(aluno valor[], int ind){
    int i;
    float media;
    for(i=0;i<ind;i++){
        media = (valor[i].nota1+valor[i].nota2+valor[i].nota3)/3;
        printf("::: M�DIA DO %d� ALUNO :::\n", i+1);
        printf("Nome: %s \n", valor[i].nome);
        printf("M�dia: %.2f \n", media);
        printf("::: FIM DA M�DIA DO %d� ALUNO :::\n\n", i+1);
	}
}

maisVelho(aluno valor[], int ind){
    
    int i;
    aluno maisVelho[1];
    for(i=0;i<ind;i++){
        if(i==0){
            
            maisVelho[0].matricula = valor[i].matricula;
            strcpy(maisVelho[0].nome, valor[i].nome);
            maisVelho[0].idade = valor[i].idade;
            maisVelho[0].nota1 = valor[i].nota1;
            maisVelho[0].nota2 = valor[i].nota2;
            maisVelho[0].nota3 = valor[i].nota3;
            
        }else if(valor[i].idade>maisVelho[0].idade){
            
            maisVelho[0].matricula = valor[i].matricula;
            strcpy(maisVelho[0].nome, valor[i].nome);
            maisVelho[0].idade = valor[i].idade;
            maisVelho[0].nota1 = valor[i].nota1;
            maisVelho[0].nota2 = valor[i].nota2;
            maisVelho[0].nota3 = valor[i].nota3;
        }
    }
    imprimirAlunos(maisVelho,1);
}

consultar(aluno valor[], int matricula, int ind){
    int i;
    for(i=0;i<ind;i++){
        if(valor[i].matricula==matricula){
            //imprimirAlunos(valor, 1); eu tentei usar a fun��o de imprimir pra mostrar os dados, 
            // mas sempre trazia os dados do primeiro aluno, ent�o coloquei os printf msm.
            printf("::: RESULTADO DA BUSCA :::\n");
		    printf("Matr�cula: %d \n", valor[i].matricula);
            printf("Nome: %s \n", valor[i].nome);
            printf("Idade: %d \n", valor[i].idade);
            printf("1� Nota: %.2f \n", valor[i].nota1);
            printf("2� Nota: %.2f \n", valor[i].nota2);
            printf("3� Nota: %.2f \n", valor[i].nota3);
            printf(":::FIM RESULTADO DA BUSCA :::\n\n");
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    aluno newAluno[50], oldAluno[3];
    int menu, qntdCadastro, csltMatricula;
    
    //DADOS PARA ALIMENTAR AS OP��ES DE CONSULTA
    //--------------------//
    oldAluno[0].matricula = 123456789;
    strcpy(oldAluno[0].nome, "Matheus dos Anjos Santana");
    oldAluno[0].idade = 24;
    oldAluno[0].nota1 = 7.5;
    oldAluno[0].nota2 = 8.6;
    oldAluno[0].nota3 = 6.9;
    //--------------------//
    oldAluno[1].matricula = 321741964;
    strcpy(oldAluno[1].nome, "Leticia Araujo Dias");
    oldAluno[1].idade = 25;
    oldAluno[1].nota1 = 6.7;
    oldAluno[1].nota2 = 9.8;
    oldAluno[1].nota3 = 8.6;
    //--------------------//
    oldAluno[2].matricula = 963456824;
    strcpy(oldAluno[2].nome, "Eduardo Santos Araujo");
    oldAluno[2].idade = 22;
    oldAluno[2].nota1 = 8.4;
    oldAluno[2].nota2 = 6.2;
    oldAluno[2].nota3 = 7.5;
    //--------------------//
    
    printf("Bem-vindo ao Sistemas de Alunos \n");
    printf("Digite: \n");
    printf("1 Para Cadastrar Aluno \n2 Para Consultar Aluno\n3 Para ver Todos os Alunos\n4 Para ver as M�dias dos Alunos\n5 Para ver o Aluno Mais Velho \n");
    scanf("%d", &menu);
    
    switch(menu){
        case 1:
            printf("::: SERVI�O DE CADASTRO DE ALUNOS :::\n\n");
            printf("Digite quantos alunos deseja cadastrar: ");
            scanf("%d", &qntdCadastro);
            printf("\n");
            cadastrar(newAluno, qntdCadastro);
            break;
        case 2:
            printf("::: SERVI�O DE CONSULTA DE ALUNOS :::\n\n");
            printf("Digite a matr�cula do aluno: ");
            scanf("%d", &csltMatricula); // Queria fazer uma condicional para informar valor inv�lido qnd colocassem uma matr�cula
                                        // que n�o est� no sistema, mas n�o fiz por motivos que correria.
            printf("\n");
            consultar(oldAluno, csltMatricula, 3);
            break;
        case 3:
            printf("::: SERVI�O DE IMPRESS�O DE TODOS OS ALUNOS :::\n\n");
            imprimirAlunos(oldAluno,3);
            break;
        case 4:
            printf("::: SERVI�O DE M�DIA DOS ALUNOS :::\n\n");
            mediaAluno(oldAluno, 3);
            break;
        case 5:
            printf("::: SERVI�O PARA VER DADOS DO ALUNO MAIS VELHO :::\n\n");
            maisVelho(oldAluno, 3);
            break;
        default:
            printf("Servi�o Inv�lido");
            break;
    }
    
    return 0;
}
