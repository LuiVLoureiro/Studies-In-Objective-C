// Recursion of Fibonnaci

#include <stdio.h>

int fib(int num){
	if(num == 0){
		return 0;
	}

	if(num == 1){
		return 1;
	}

	return fib(num - 1) + fib(num - 2);
}

int main(){
	setbuf(stdout, NULL);

	int times;

	printf("How many times do you want to see fibonacci numbers -> ");
	scanf("%d", &times);

	for(int i = 0; i < times; i++){
		printf("%d ", fib(i));
	}

	return 0;
}
