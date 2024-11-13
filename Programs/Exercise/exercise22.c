
/*
 * Crie um programa que leia o nome, a idade e o endereço de uma pessoa
 * armazene os dados em uma struct
 */

struct st_person{
	char name[50], address[100];
	int age;
};

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	struct st_person person;

	printf("Type your name -> ");
	fgets(person.name, 50, stdin);
	printf("Type your address -> ");
	fgets(person.address, 100, stdin);
	printf("Type your age -> ");
	scanf("%d", &person.age);

	printf("Your Name is -> %s\n", strtok(person.name, "\n"));
	printf("Your Address is -> %s\n", strtok(person.address, "\n"));
	printf("Your Age is -> %d", person.age);

	return 0;
}
