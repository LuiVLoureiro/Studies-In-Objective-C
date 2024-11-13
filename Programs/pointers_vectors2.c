
// 1 Bit = {1} or {0}
// 1 Byte = 8 Bits = 0000 0001
// 1 Int = 4 Bytes = 0000 0000 0000 0000 0000 0000 0000 0001
// 1 Vector With 5 Numbers = 4 Bytes * 5 = 20 Bytes
// 1 Array[5] = 20 Bytes

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int array[5] = { 1 , 2 , 3 , 4 , 5 };

	printf("The Value of First Element in the Array is -> %d\n", array[0]);
	printf("The Address of First Element in the Array is -> %p\n", array[0]);
	printf("The Size in Bytes of First Element is -> %d Bytes\n\n", sizeof(array[0]));

	// Like Mentioned before, 4 bytes times 5 elements is 20 bytes;

	printf("The Size of Entire Array is -> %d Bytes\n\n", sizeof(array));

	// If you want to control the array with pointers, make something like that:

	printf("The Value one -> %d\n", *(array));
	printf("The Value two -> %d\n", *(array+1));
	printf("The Value tree -> %d\n", *(array+2));
	printf("The Value four -> %d\n", *(array+3));
	printf("The Value five -> %d\n", *(array+4));

	return 0;
}
