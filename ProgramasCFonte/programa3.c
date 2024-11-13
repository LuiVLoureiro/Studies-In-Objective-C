#include <stdio.h>

int main(){
	int num, sum = 0;

	setbuf(stdout, NULL);

	for(int i = 0; i < 5; i++){

		printf("Type a Number -> ");
		scanf("%d", &num);

		sum = num + sum;

	};

	printf("The sum of your numbers is -> %d", sum);

	return 0;
}

