#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file;
	int num, sum = 0, result;

	file = fopen("numbers.txt", "r");

	if(file){
		while(!feof(file)){
			result = fscanf(file, "%d", &num);
			if(result == 1){
				sum = num + sum;
			}
		}
		printf("Your sum is -> %d", sum);
	} else {
		printf("Don't recognize your file...");
	}

	fclose(file);

	return 0;
}
