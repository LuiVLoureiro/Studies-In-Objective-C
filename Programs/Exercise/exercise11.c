
/*
 * Faça um programa que leia um vetor de 10 posições.
 * Conte e mostre quantos valores pares ele possui.
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int vector[10];

	for(int i = 0; i < 10; i++){

		printf("The value of position vector[%d] is -> %d\n", i, vector[i]);
		if((vector[i] % 2) == 0){
			printf("And this number is even\n");
		} else {
			printf("And this number not is even\n");
		}
	}

	return 0;
}
