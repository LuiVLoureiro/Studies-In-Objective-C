#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file;
	char c;

	file = fopen("text.txt", "r");

	if(file){
		while((c = getc(file)) != EOF){
			printf("%c", c);
		}
		fclose(file);
	} else {
		printf("Don't was possible find your file...");
	}

	return 0;
}


// END OF FILE IS THE FINAL LINE
// Import the method using a FILE
// r -> read
// w -> write
// wr -> read and write
