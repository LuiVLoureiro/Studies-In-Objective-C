// ASCII Table is represent characteres in C
// That is the number 97 to 122 is the complete alphabet between a and z
// Make a alphabet in one for loop

#include <stdio.h>

int main(){

	setbuf(stdout, NULL);

	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}

	return 0;
}
