#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int var = 8;
	int *pointer = &var;

	// A normal Variable
	printf("The Content of Variable is -> %d\n", var);
	printf("The Location of Variable in Memory is -> %d\n", &var);

	//The content of Pointer is the memory address of the variable;
	printf("The Content of Pointer is -> %d\n", pointer);

	// Notice the Storage Location of Pointer is Different
	// This means that was created a new Variable in System
	printf("The Location of Pointer in Memory is -> %d\n", &pointer);

	// The Pointer Indicated the Same Value of the Variable
	// Because of that the name reference the Point in Memory
	printf("The Content of the Pointer is indicated -> %d\n", *pointer);


	// The pointer changes variable because is alterated is in memory address
	*pointer = 10;
	printf("The Change of Pointer on Variable -> %d", var);


	return 0;
}
