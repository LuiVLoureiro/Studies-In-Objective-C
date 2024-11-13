/*
 * 3. Faça um programa que receba do usuário o nome de um arquivo texto
 * e um caractere. Mostre na tela quantas vezes aquele caractere aparece
 * dentro do arquivo.
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file;
	char sfile[100], file_array[100], character[10], c;
	int count = 0;

	printf("What's the name of the file? -> ");
	gets(sfile);
	printf("Type the character you want to be check on this file -> ");
	gets(character);

	file = fopen(sfile, "r");

	if(file){
		while((c = getc(file)) != EOF){

			if(c == character[0]){
				count = count + 1;
			}
		}
	} else {
		printf("Don't find this file...");
	}

	fclose(file);

	printf("The number of times the caracter is show is -> %d", count);


	return 0;
}
