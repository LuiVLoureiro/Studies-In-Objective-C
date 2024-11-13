#include <stdio.h>

int binary_search(int array[], int key, int size){
	int start = 0;
	int end = size - 1;

	while(start <= end){
		int middle = (start+end)/2;
		if(key == array[middle]){
			return middle;
		}
		if(key < array[middle]){
			end = middle-1;
		} else {
			start = middle+1;
		}
	}

	return -1;

}

int main(){
	setbuf(stdout, NULL);
	int array[7] = { 10, 11, 22, 37, 65, 78, 98 };
	int key = 78;
	int index = binary_search(array, key, 7);
	printf("The number [%d], is been in position [%d] of array...", key, index+1);

	return 0;
}
