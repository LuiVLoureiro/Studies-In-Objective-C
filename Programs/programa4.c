#include <stdio.h>

int main(){
	int num, sum = 0;

	setbuf(stdout, NULL);

	do{
		{
				printf("Type a number -> ");
				scanf("%d", &num);
				sum = sum + num;
			}
	}
	while(num != 0);

	printf("The sum of numbers is %d", sum);

	return 0;
}
