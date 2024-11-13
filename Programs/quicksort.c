#include <stdio.h>

int troca(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int divisao(int array[], int inicio, int fim){
	int pivo = array[fim];
	int i = inicio-1;

	for(int j = inicio; j < fim; j++){
		if(array[j] < pivo){
			i++;
			troca(&array[j], &array[i]);
		}
	}
	if(array[i+1] != pivo){
		troca(&array[i+1], &array[fim]);
	}

	return i+1;
}

int quicksort(int array[], int inicio, int fim){
	if(inicio < fim){
		int parte_p = divisao(array, inicio, fim);

		quicksort(array, inicio, parte_p - 1); //Esquerdo
		quicksort(array, parte_p+1, fim); // Direito
	}
}

int main(){
	int dados[] = {8, 7, 6, 1, 0, 9, 2};

	for(int i = 0; i < 7; i++){
			printf("[%d] ", dados[i]);
		}

	printf("\n");

	quicksort(dados, 0, 7-1);

	for(int i = 0; i < 7; i++){
		printf("[%d] ", dados[i]);
	}

	return 0;
}
