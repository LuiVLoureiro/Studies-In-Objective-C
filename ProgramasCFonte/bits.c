// >> Operator to walk to right side
// << Operator to walk to left side
// ~ Operator of Negation

#include <stdio.h>

int main(){
	int num = 2;

	setbuf(stdout, NULL);

	printf("Normal Num -> %d", num);

	printf("Number with one case to right -> %d\n", num >> 1);
	printf("Number with two cases to left -> %d\n", num << 2);
	printf("Number with three cases to left -> %d\n", num << 3);
	printf("Number with four cases to left -> %d\n", num << 4);
	printf("Number with oposite with negation operator -> %d\n", ~num);

	return 0;

}
