#include <stdio.h>

// The prototype of function make a better program and avoid mistakes
// Beyond this indicate to the program what´s functions is be declarated

int cube(int n1);

int main(){
	setbuf(stdout, NULL);
	int n1;

	printf("Type a Number -> ");
	scanf("%d", &n1);

	printf("The Cube of your number is -> %d", cube(n1));

	return 0;
}

int cube(int n1){
	return ((n1*n1)*n1);
}
