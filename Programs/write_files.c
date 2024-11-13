#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	FILE *file, *fread;
	char fruits[50];

	file = fopen("fruits.txt", "a");
	fread = fopen("fruits.txt", "r");

	if(file){
		printf("Type a Fruit or Type 0 to finish -> ");
		fgets(fruits, 50, stdin);
		while(fruits[0] != '0'){
			printf("Type a Fruit or Type 0 to finish -> ");
			fgets(fruits, 50, stdin);
		}
	} else {
		printf("Don't recognize your file");
	}

	fclose(file);
	fclose(fread);



	return 0;
}
