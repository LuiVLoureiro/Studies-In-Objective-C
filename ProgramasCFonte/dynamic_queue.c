#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
	int data;
	struct NO *next;
}NO;

typedef struct QUEUE{
	NO *head;
	NO *tail;
}QUEUE;

void init(QUEUE *f){
	f->head = NULL;
	f->tail = NULL;
}

void add(int data, QUEUE *f){
	NO *ptr = (NO*)malloc(sizeof(NO));
	if(ptr != NULL){
		ptr->data = data;
		ptr->next = NULL;
		if(f->head == NULL){
			f->head = ptr;
		} else {
			f->tail->next = ptr;
		}
		f->tail = ptr;
	} else {
		printf("Memory Allocation Error...");
	}
}

void rem(QUEUE *f){
	NO *ptr = f->head;
	if(ptr != NULL){
		f->head = ptr->next;
		ptr->next = NULL;
		free(ptr);
	} else {
		printf("Empty Queue...");
	}
}

void show(QUEUE *f){
	NO *ptr = f->head;
	if(ptr != NULL){
		while(ptr != NULL){
			printf("[%d] ", ptr->data);
			ptr = ptr->next;
		}
	} else {
		printf("Empty Queue...");
	}
}

int main(){
	setbuf(stdout, NULL);
	QUEUE *q1 = (QUEUE*)malloc(sizeof(QUEUE));
	if(q1 != NULL){
		init(q1);
		add(373, q1);
		add(374, q1);
		add(375, q1);
		show(q1);
		printf("\n");
		rem(q1);
		show(q1);
		printf("\n");
		rem(q1);
		show(q1);
		printf("\n");
		rem(q1);
		show(q1);
	} else {
		printf("Memory Allocation Failed to Queue...");
	}
	return 0;
}
