/*
 * Faça um programa que tenha uma função que,
 * dado um caractere qualquer de entrada,
 * retorne o mesmo caractere sempre em maiúsculo.
 *
*/

// UPPERCASE -> 65 -> 90 ;; 25 CHARACTERS
// LOWERCASE -> 97 -> 122;; 25 CHARACTERS
// EVERY SINGLE TIME IS MINUS FOR 32

#include <stdio.h>

char conversion(char letter){
	// Validation of Letter to garanted they be in Lowercase

	if(letter >= 97 && letter <= 122){
		return letter - 32;
	} else {
		printf("Your letter is not in lowercase...\n");
		return letter = NULL;
	}

	return letter;
}

int main(){
	setbuf(stdout,NULL);
	char letter[2];

	printf("Type a Letter in LowerCase to be Converted in UpperCase -> ");
	scanf("%s", &letter);

	for(int i = 0; letter[i] != '\0'; i++){
		letter[i] = conversion(letter[i]);
	}

	printf("The Letter Converted is -> %s", letter);

	return 0;
}


