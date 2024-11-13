/*
 * Malloc is a function that allocated the memory without transforming the space in address
 *
 * Calloc is a function that allocated the memory transforming the space in address for 0;
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
	setbuf(stdout, NULL);

	int *p;

	//p = (int*) malloc(3 * sizeof(int));
	p = (int*) calloc(3, sizeof(int));
	printf("- > [%d] ", p[0]);
	printf("- > [%d] ", p[1]);
	printf("- > [%d] ", p[2]);


	free(p);
	p = NULL;

	return 0;
}

