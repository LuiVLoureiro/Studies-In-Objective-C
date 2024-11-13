
/*
 * Faça um programa que leia um vetor de 10 posições e atribua valor 0
 * para todos os elementos que possuírem valores negativos.
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int vector[10];

	// Receive the values

	for(int i = 0; i < 10; i++){

		printf("Type one number to register -> ");
		scanf("%d", &vector[i]);

		if(vector[i] < 0){
			vector[i] = 0;
		} else {
			continue;
		}
	}

	printf("\n");

	// Show´s All Vector

	for(int i = 0; i < 10; i++){
		printf("%d\n", vector[i]);
	}

	return 0;
}
