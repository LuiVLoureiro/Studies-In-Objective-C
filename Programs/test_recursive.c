#include <stdio.h>

int f(int n){
	if(n == 0){
		return 1;
	}
	if(n == 1){
		return 2;
	} else {
		return (f(n-1)*f(n-1)) + (f(n-2)*f(n-2));
	}
}

int main(){

	setbuf(stdout, NULL);

	int n;

	printf("Choose a number -> ");
	scanf("%d", &n);

	int x = f(n);
	printf("The result is -> %d", x);

	return 0;
}
