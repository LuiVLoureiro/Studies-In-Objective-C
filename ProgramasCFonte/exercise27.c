/*
 * 1. Crie um programa que:
	a) Aloque dinamicamente um array de 5 números inteiros;
	b) Peça para o usuário informar os 5 números no espaço alocado;
	c) Mostre na tela os 5 valores;
	d) Libere a memória alocada;
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	setbuf(stdout, NULL);

	// Allocation
	int *array = (int*)malloc(5 * sizeof(int));

	// Input
	for(int i = 0; i < 5; i++){
		printf("Type the %d Number -> ", i);
		scanf("%d", &array[i]);
	}

	// Output
	for(int i = 0; i < 5; i++){
		printf("The %d Number of Array is -> %d\n", i, array[i]);
	}

	// Free Memory

	free(array);
	array = NULL;


	return 0;
}
