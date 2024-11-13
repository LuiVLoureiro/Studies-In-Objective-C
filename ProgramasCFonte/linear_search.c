#include <stdio.h>

int linear_search(int array[], int key, int size){
	for(int i = 0; i < size; i++){
		if(array[i] == key){
			return i;
		}
	}

	return -1;
}

int main(){
	setbuf(stdout, NULL);
	int array[7] = { 10, 11, 22, 37, 65, 78, 98 };
	int key= 78;
	int index = linear_search(array, key, 7);

	printf("The number %d is been in %d position of array...", key, index + 1);

	return 0;
}
