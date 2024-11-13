#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	typedef float grade;

	grade test1 = 7.5;
	grade test2 = 8.0;
	grade test3 = 5.3;

	grade sum = test1 + test2 + test3;
	grade mean = sum / 3;

	printf("Your grade of test1 is -> %.2f\n", test1);
	printf("Your grade of test2 is -> %.2f\n", test2);
	printf("Your grade of test3 is -> %.2f\n", test3);
	printf("Your mean is -> %.2f", mean);

	return 0;
}
