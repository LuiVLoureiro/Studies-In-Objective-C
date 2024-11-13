// In C, haven´t Boolean values but the language recognize this values in
// 0 for False and any other number represents True

#include <stdio.h>

int main(){
	// False because the 0 represents the negative boolean value

	if(0){
		printf("True\n");
	} else {
		printf("False\n");
	}

	// True Because the 7 or any other number represents the positive boolean value

	if(7){
		printf("True\n");
	} else {
		printf("False\n");
	}

	// That is represent a if(true) is that... or if(false) is that...

	return 0;
}
