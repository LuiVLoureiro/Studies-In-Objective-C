// Uses gets function in place of scanf to get strings from user
// And Defines a limit of vector in every char variable
// Uses %s to define a String

#include <stdio.h>

int main(){
	char name[50];

	setbuf(stdout, NULL);

	printf("What´s your name -> ");
	gets(name);

	printf("Your name is %s", name);

	return 0;
}
