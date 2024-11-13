// Faça um programa que leia um número inteiro e o imprima.

#include <stdio.h>

int main(){
	int num;

	setbuf(stdout, NULL);

	printf("Type your number -> ");
	scanf("%d", &num);
	printf("Your Number is: %d", num);

	return 0;
}
