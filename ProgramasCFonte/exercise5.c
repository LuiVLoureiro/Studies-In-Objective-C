// Leia quatro notas, calcule a média aritmética e imprima o resultado.
// sum of values / number of values

#include <stdio.h>

int main(){

	int grade1, grade2, grade3, grade4, mean = 0;

	setbuf(stdout, NULL);

	printf("Type your first grade -> ");
	scanf("%d", &grade1);
	printf("Type your second grade -> ");
	scanf("%d", &grade2);
	printf("Type your third grade -> ");
	scanf("%d", &grade3);
	printf("Type your fourth grade -> ");
	scanf("%d", &grade4);
	mean = (grade1+grade2+grade3+grade4)/4;

	if(mean >= 7){
		printf("The Mean of your notes is -> %d You pass!!", mean);
	} else {
		printf("The Mean of your notes is -> %d You not pass, study more...", mean);
	}

	return 0;

}

