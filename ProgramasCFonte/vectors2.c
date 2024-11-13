#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int numbers[5], sum = 0; //0..4

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 30;

	for(int i = 0 ; i < 5; i++){
		sum = sum + numbers[i];
	}

	printf("The Sum of array is -> %d", sum);

	return 0;
}
