// Decision Structures

#include <stdio.h>

int main(){

	int age;

	setbuf(stdout, NULL);

	printf("Type what your age -> ");
	scanf("%d", &age);
	if(age < 18){
		printf("You are a Minor");
	} else if(age > 18 && age < 60){
		printf("You are a Adult");
	} else if(age < 120) {
		printf("You are a Elderly");
	} else {
		printf("You probably type a wrong Age, because is impossible to someone have this age.");
	}

	return 0;
}
