/*
 * Crie um programa que tenha uma função recursiva que receba um valor
 * inteiro e converta este número para binário.
 */

#include <stdio.h>

int f(int n){
	if(n == 0){
		return 0;
	} else {
		return ((n % 2) + 10 * f(n/2));
	}
}

int main(){
	setbuf(stdout, NULL);
	int n;
	printf("Type a Integer Number -> ");
	scanf("%d", &n);
	printf("--> %d", f(n));

	return 0;
}


//
