#include <stdio.h>
#include "lib.h"

int main(){
	setbuf(stdout, NULL);

	int num1, num2;

	welcome_message();

	printf("Type a Number -> ");
	scanf("%d", &num1);
	printf("Type a another number -> ");
	scanf("%d", &num2);
	printf("The Sum of your numbers is -> %d and the multiplication is -> %d", sum(num1, num2), multiplication(num1, num2));

	return 0;
}
