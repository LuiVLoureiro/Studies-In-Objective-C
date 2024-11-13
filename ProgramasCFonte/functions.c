//void means empty

#include <stdio.h>

void message(int(x)){
	printf("This is number of message -> %d\n", x);
}

int square(int num1, int num2){
	int result = num1 * num2;
	return result;
}

void transforming_in_char(int number){
	char text = number;
	printf("Your Number in Char is -> %c <- \n", text);
}

int main(){
	setbuf(stdout, NULL);

	int number;

	printf("Type a Number for pass to another function -> ");
	scanf("%d", &number);
	message(number);

	printf("The Square of your number is -> %d\n", square(number, number));

	transforming_in_char(number);


	return 0;

}
