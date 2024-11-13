/*
 * Crie um programa que tenha uma função recursiva que receba
 * um número inteiro positivo N, calcule e
 * apresente o somatório dos números de 1 a N.
 */

#include <stdio.h>

int recursive_sum(int n){
	if(n == 1){
		return 1;
	} else {
		return n + recursive_sum(n-1);
	}
}


int main(){

	setbuf(stdout, NULL);
	int times;

	printf("How many times you want to sum numbers? -> ");
	scanf("%d", &times);

	if (times <= 0) {
		printf("Number must be positive and non-zero...\n");
	} else {
		int result = recursive_sum(times);
		printf("The summation of numbers from 1 to %d is: %d\n", times, result);
	}

	return 0;
}
