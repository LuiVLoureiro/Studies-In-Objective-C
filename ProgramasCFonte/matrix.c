#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	char name[3][50];

	for(int i = 0; i < 3; i++){
		printf("What is your name? -> ");
		gets(name[i]);
	}

	for(int i = 0; i < 3; i++){
		printf("Hi %s\n", name[i]);
	}

	return 0;
}
