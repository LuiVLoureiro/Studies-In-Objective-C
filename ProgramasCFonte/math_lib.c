#include <stdio.h>
#include <math.h>

int main(){
	setbuf(stdout, NULL);

	int a = 3;
	int b = 2;

	printf("This Number %d elevate for this number %d is -> %lf\n", a, b, pow(a,b));

	return 0;
}
