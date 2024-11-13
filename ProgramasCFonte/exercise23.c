/*
 * Crie um programa que tenha uma struct chamada aluno contendo nome,
 * número de matrícula e curso.
 * Leia do usuário a informação de 5 alunos, armazene em um vetor
 * desta estrutura e imprima os dados na tela.
 */

struct st_student{
	char enrollment[10];
	char name[50];
	char course[100];
}students[5];

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);


	for(int i = 0; i < 5; i++){
		printf("Type your Enrollment -> ");
		fgets(students[i].enrollment, 10, stdin);
		printf("Type your Name -> ");
		fgets(students[i].name, 50, stdin);
		printf("Type your Course -> ");
		fgets(students[i].course, 100, stdin);
		printf("\n");
	}

	for(int i = 0; i < 5; i++){
		printf("====================== Student Number %d ======================\n", i+1);
		printf("Enrollment of Student -> %s\n", strtok(students[i].enrollment, "\n"));
		printf("Name of Student -> %s\n", strtok(students[i].name, "\n"));
		printf("Course of Student -> %s\n", strtok(students[i].course, "\n"));
	}

	return 0;
}
