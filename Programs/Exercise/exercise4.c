// Faça um programa que leia três valores e apresente como
// resultado a soma dos quadrados dos valores lidos.

# include <stdio.h>

int main(){
	int num1, num2, num3, sum = 0;

	setbuf(stdout, NULL);

	printf("Type your first number -> ");
	scanf("%d", &num1);
	printf("Type your second number -> ");
	scanf("%d", &num2);
	printf("Type your third number -> ");
	scanf("%d", &num3);

	sum = (num1*num1) + (num2*num2) + (num3*num3);
	printf("The Sum of yours Three Numbers is -> %d", sum);

	return 0;
}
