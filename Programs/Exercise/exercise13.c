/*
 * 1. Faça um programa que tenha uma função que receba um vetor de inteiros
 * como parâmetro e retorne o maior valor.
 */

#include <stdio.h>

max_vector(int vector[], int count);

int main(){
	setbuf(stdout, NULL);

	int num, vector[10];

	// Send Numbers
	for(int i = 0; i < 10; i++){
		printf("Type your %d number -> ", i);
		scanf("%d", &num);
		vector[i] = num;
	}

	printf("The max value is -> %d", max_vector(vector, 10));

	return 0;
}

max_vector(int vector[], int count){

	int max = vector[0];

	for(int i = 1; i < count; i++){
		if(vector[i] > max){
			max = vector[i];
		}
	}

	// Return the max value
	return max;
	}








