/*
 *Faça um programa que tenha uma função que dado um valor numérico de entrada,
 *Faça gere e imprima como saída o número de linhas com pontos de exclamação, ]
 *Faça conforme exemplo abaixo (para n = 5)
!
!!
!!!
!!!!
!!!!!
 */

#include <stdio.h>

void exclamation(int number);

int main(){
	setbuf(stdout, NULL);
	int number;

	printf("Type One Number to make the mosaic of dot´s of exclamation -> ");
	scanf("%d", &number);

	for(int i = 0; i != number; i++){
		exclamation(i);
	}


	return 0;
}

void exclamation(int number){
	for(int i = 0; i != number+1; i++){
		printf("!");
	}
	printf("\n");

}
