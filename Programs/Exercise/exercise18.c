/*
 * Faça um programa que contenha um array de inteiros contendo 5 elementos.
 * Utilizando apenas aritmética de ponteiros,
 * leia este array do teclado e imprima o dobro de cada valor lido
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int array[5];
	int* pointer = array;

	for(int i = 0; i < 5; i++){
		printf("Type a Number for Array -> ");
		scanf("%d", pointer+i);

		printf("-> %d\n", (*(pointer+i)) * 2);
	}

	// How Arrays usualy saves memory in sequence
	// pointer + 1 is --> 40002 + 1 = 40003
	// In looping is According to address of pointers is pointing
	// ------------------------------------------------------------------
	// scanf("%d", &variable);
	// &variable = 40002
	// pointer --> 40002
	// &pointer -> 40009 --> Value of Pointer
	// *pointer -> 4     --> Value of Variable


	return 0;
}
