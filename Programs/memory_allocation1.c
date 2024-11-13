// Dynamic Memory Allocation
// Define Address in Memory For a Number Especific of Variables

/*
 * Exemplo 1 - Alocação de Memória para um Vetor de Inteiros
	Você precisa criar um programa que leia n números inteiros
	do usuário e armazene esses números em um vetor.

	Como n é um valor fornecido durante a execução do programa,
	o tamanho do vetor só será conhecido em tempo de execução,
	tornando necessário o uso de malloc.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	setbuf(stdout, NULL);
	int n;

	// Input
	printf("Type a Number for Array -> ");
	scanf("%d", &n);

	// Dynamic Memory Allocation -> malloc
	int *array = (int*)malloc(n * sizeof(int)); // 4 Bytes *

	// If Memory spaces are correctly allocates continue else memory insuficient...
	if(array){
		// Save Numbers For Array
			for(int i = 0; i < n; i++){
				printf("Type Number %d -> ", i+1);
				scanf("%d", &array[i]);
			}

			// Show Array

			printf("The Array is: ");
			for(int i = 0; i < n; i++){
				printf("[%d] ", array[i]);
			}
	} else {
		printf("Memory not allowed...");
	}

	// Free Memory
	free(array);

	// Free Pointer
	array = NULL;

	return 0;
}
