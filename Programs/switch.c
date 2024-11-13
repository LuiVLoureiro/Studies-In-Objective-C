#include <stdio.h>

int main(){
	int valor;

	setbuf(stdout, NULL);

	printf("Type a Value between 7 and 1 -> ");
	scanf("%d", &valor);

	switch(valor) {
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	default:
		printf("Invalid Value");
		break;

	}

	return 0;

}
