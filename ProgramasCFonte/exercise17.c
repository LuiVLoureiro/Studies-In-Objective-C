/*
 * Faça um programa que contenha duas variáveis inteiras.
 * Leia estas variáveis do teclado.
 * Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int num1, num2;

	printf("Type a Number -> ");
	scanf("%d", &num1);
	printf("Type a Another Number -> ");
	scanf("%d", &num2);

	printf("The Content of Number 1 is -> %d\n", num1);
	printf("The Address of Number 1 is -> %d\n", &num1);
	printf("The Content of Number 2 is -> %d\n", num2);
	printf("The Address of Number 2 is -> %d\n", &num2);

	if(&num1 > &num2){
		printf("The Address of Number %d is Bigger than Address of Number %d", num1, num2);
	} else if(&num2 > &num1) {
		printf("The Address of Number %d is Bigger than Address of Number %d", num2, num1);
	}

	return 0;
}
