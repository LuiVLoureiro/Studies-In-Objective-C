#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file;
	char array[100], *result;

	file = fopen("text.txt", "r");

	if(file){
		while(!feof(file)){
			result = fgets(array, 100, file);
			if(result){
				printf("%s", result);
			}
		}

	} else {
		printf("Don't recognize your file...");
	}

	fclose(file);

	return 0;
}

//If don't check to be true on the result, the final element is repeated
