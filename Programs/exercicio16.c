
/*
 * Faça um programa que declare um inteiro, um real e um char,
 * e ponteiros para inteiro, real e char.
 * Associe as variáveis aos ponteiros (use &).
 *
 * Modifique os valores de cada variável usando os ponteiros.
 *
 * Imprima os valores das variáveis antes e após a modificação.
 */

#include <stdio.h>

int main(){
	setbuf(stdout, NULL);

	int num1 = 10;
	float num2 = 7.3;
	char value[50] = "Hi";

	int* pointer1 = &num1;
	float* pointer2 = &num2;
	char* pointer3 = &value;

	printf("Before changes: Int -> %d, Float -> %.1f, Char -> %s\n", num1, num2, value);

	*pointer1 = ++(*pointer1);
	*pointer2 = --(*pointer2);

	*(pointer3) = 'H';
	*(pointer3+1) = 'e';
	*(pointer3+2) = 'l';
	*(pointer3+3) = 'l';
	*(pointer3+4) = 'o';

	printf("After changes: Int -> %d, Float -> %.1f, Char -> %s", num1, num2, value);

	return 0;
}
