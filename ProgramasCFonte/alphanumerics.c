
// Characteres is equal to "char" definition and they places in '...' commands
// String* is equal to every data in the "...."

#include <stdio.h>

int main(){
	char option;

	setbuf(stdout, NULL);

	printf("Type A to your Currency \n");
	printf("Type B to your Limit \n");
	printf("Type C to your Extract \n");
	printf("Type here --> ");
	scanf("%c", &option);

	if(option == 'A'){
		printf("Your Currency is ...");
	} else if(option == 'B'){
		printf("Your Limit is ...");
	} else if(option == 'C'){
		printf("Your Extract is ...");
	} else {
		printf("Invalid Command...");
	}

	return 0;
}
