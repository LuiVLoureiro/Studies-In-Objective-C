/*
 * 1. Faça um programa que:
 * a) Crie/abra um arquivo texto de nome “arq.txt”;
 * b) Permita que o usuário grave diversos caracteres neste arquivo,
 * até que o usuário entre com o caractere ‘0’;
 * c) Feche o arquivo;
 * d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file, *rfile;
	char array[50], *c;

	file = fopen("arq.txt", "a");
	rfile = fopen("arq.txt", "r");

	if(file){
		while(array[0] != '0'){
			printf("Type or Digit 0 to finish -> ");
			fgets(array, 50, stdin);
			fputs(array, file);
		}

		while(!feof(rfile)){
			c = fgets(array, 50, rfile);
			if(c){
				printf("%s", c);
			}
		}
	} else {
		printf("Don't find your file...");
	}


	fclose(file);
	fclose(rfile);

	return 0;
}
