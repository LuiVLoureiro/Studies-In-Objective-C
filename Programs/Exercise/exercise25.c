/*
 * Crie um programa que tenha uma função recursiva que calcule e
 * retorne o fatorial de um número inteiro N.
 *
 * n = 5
 * 5 * 4 * 3 * 2 * 1
 *
 */

int fact(int n){
	if(n == 1){
		return 1;
	}

	return n*fact(n-1);
}

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	int n;
	printf("Type a Number for your Factorial result -> ");
	scanf("%d", &n);
	printf("Your result is -> %d", fact(n));

	return 0;
}
