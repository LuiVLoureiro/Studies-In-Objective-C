// Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
// considerando números maiores que 0.

# include <stdio.h>

int main(){

	int num = 3;

	setbuf(stdout, NULL);

	for(int i = 1; i <= 5; i++){
		printf("The number that is multiplied by 3 is -> %d\n", num * i);
	}

	return 0;
}
