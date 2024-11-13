/*
 * Faça um programa que receba do usuário o nome de um arquivo texto
 * e mostre na tela quantas linhas este arquivo possui.
 */

#import <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file;
	char array[50];
	int count = 0;

	file = fopen("text.txt", "r");

	if(file){
		while(!feof(file)){
			fgets(array, 50, file);
			count = ++count;
		}

		printf("The Numbers of lines in code is -> %d", count);

	} else {
		printf("Don't find your file...");
	}

	fclose(file);

	return 0;
}
