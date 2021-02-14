#include<stdio.h>
#include<conio.h>

int main(void) {
	
	struct boletin_de_aluno
	{
		
	char nome[50];
	char disciplina[40];
	float nota_prova1;
	float nota_prova2;
	
			
	};
	
	
	struct boletin_de_aluno aluno;
	
	
	printf("\n==================Cadastro de Aluno==================\n\n\n");
	
	
	
	printf("Nome do Aluno:....");
	fflush(stdin);
	fgets(aluno.nome, 40, stdin);
	
	printf("Nome da Disciplina:...");
	fflush(stdin);
	fgets(aluno.disciplina, 40, stdin);
	
	printf("Informe a primeira nota:...");
	scanf("%f", &aluno.nota_prova1);
	
	printf("Informe a segunda nota:...");
	scanf("%f", &aluno.nota_prova2);
	
	
	printf("\n\n================= Lendo os Dados da Struct=================\n\n");
	printf("Nome ...........: %s", aluno.nome);
    printf("Disciplina .....: %s", aluno.disciplina);
    printf("Nota da Prova 1 ...: %.2f\n" , aluno.nota_prova1);
    printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota_prova2);
    
    
  
    getch();
    return(0);
		
	
}