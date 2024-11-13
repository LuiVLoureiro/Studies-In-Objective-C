#include <stdio.h>

void actions_of_pointer(int* pointer){
	*pointer = ++(*pointer);
}

int main(){
	setbuf(stdout, NULL);
	int variable = 5;

	printf("Variable Before Pointer Changes -> %d\n", variable);
	actions_of_pointer(&variable);
	printf("Variable After Pointer Changes -> %d\n", variable);

	return 0;
}
