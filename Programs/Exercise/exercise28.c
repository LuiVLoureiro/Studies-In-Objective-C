/*
 * Faça um programa que receba do usuário o tamanho de uma string e
 * chame uma função para locar dinamicamente essa string.
 *
 * Receba esta string do usuário.
 * Por fim, apresente conteúdo dessa string sem suas vogais
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	setbuf(stdout , NULL);
	int size;
	char *string;

	printf("Type a size of a String -> ");
	scanf("%d", &size);

	string = (char*)malloc((size + 1) * sizeof(char));

	getchar();

	printf("Type a String --> ");
	fgets(string, size + 1, stdin);

	for(int i = 0; string[i] != '\0'; i++){
		if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u'){
			printf("%c", string[i]);
		}
	}

	return 0;
}
