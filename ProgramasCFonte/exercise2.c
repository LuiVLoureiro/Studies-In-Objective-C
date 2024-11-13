// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

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

	sum = num1+num2+num3;
	printf("The sum of your three numbers is %d", sum);

	return 0;
}
