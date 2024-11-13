#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int vector[3] = { 1 , 2 , 3 };

	// Automatically The Pointer is go to the first element and address in the vector

	int *pointer = vector;

	printf("Content of Pointer ---> %d\n", *pointer);
	printf("Address of Pointer ---> %d\n", &pointer);
	printf("Address in Hexadecimal of Pointer ---> %p\n", pointer);
	printf("Address of Pointer Saves in Your Slot ---> %d\n\n\n", pointer);

	printf("Value of First Element of Vector ---> %d\n", vector[0]);

	// Note that the same address of the pointer
	printf("Address of the First Element of Vector ---> %d\n", &vector[0]);

	// If you want to pointer the another element of the same vector you must be change the address saved for him:

	pointer = &vector[2];

	printf("Value of the new element of pointer is directly ---> %d\n", *pointer);

	return 0;
}
