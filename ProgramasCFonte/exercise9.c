
/*
  Faça um programa que leia 10 números e escreva o maior e o menor valor lido
*/

#include <stdio.h>

int main(){
	int max, min, num;
	setbuf(stdout, NULL);
	printf("Type a number -> ");
	scanf("%d", &num);
	max = min = num;
	for(int i = 0; i < 9; i++){
		printf("Type a number -> ");
		scanf("%d", &num);
		if(num > max){
			max = num;
		}
		if(num < min){
			min = num;
		}
	}
	printf("The Max Number is -> %d\n", max);
	printf("The Min Number is -> %d\n", min);
	return 0;
}
