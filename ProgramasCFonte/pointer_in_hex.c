#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int variable = 10;
	int* pointer = &variable;

	printf("The Variable Location -> %d\n", &variable);
	printf("The Pointer Location -> %d\n", &pointer);

	printf("The Hexadecimal Location of Variable %p\n"), variable;
	printf("The Hexadecimal Location of Pointer %p\n"), pointer;



	return 0;
}
