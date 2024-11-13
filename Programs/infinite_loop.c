#include <stdio.h>
#include <math.h>

int main(){
	int value = 1;

	setbuf(stdout, NULL);

	while(value <= pow(10, 6)){
		printf("%d\n", value);
		value = value + 1;
	}

	return 0;
}

// 8s de Execução
