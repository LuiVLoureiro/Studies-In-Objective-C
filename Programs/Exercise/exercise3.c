//  Leia um número e imprima o resultado do quadrado deste número.

#include <stdio.h>

int main(){
	int num, square;
	setbuf(stdout, NULL);

	printf("Type your number -> ");
	scanf("%d", &num);

	square = num*num;
	printf("The Square of %d is %d", num, square);

	return 0;
}
