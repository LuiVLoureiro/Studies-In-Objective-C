#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE *next;
}NODE;

typedef struct STACK{
	NODE *top;
}STACK;

void init(STACK *s){
	s->top = NULL;
}

void add(int data, STACK *s){
	NODE *ptr = (NODE*)malloc(sizeof(NODE));
	if(ptr != NULL){
		ptr->data = data;
		ptr->next = s->top;
		s->top = ptr;
	} else {
		printf("Memory Allocation of Node is Failed...");
	}
}

void del(STACK *s){
	NODE *ptr = s->top;
	if(ptr != NULL){
		s->top = ptr->next;
		ptr = NULL;
		free(ptr);
	} else {
		printf("Empty Stack...");
	}

}

void show(STACK *s){
	NODE *ptr = s->top;
	if(ptr != NULL){
		while(ptr != NULL){
			printf("[%d] \n", ptr->data);
			ptr = ptr->next;
		}
	} else {
		printf("Empty Stack...");
	}

}

int main(){
	setbuf(stdout, NULL);
	STACK *stack1 = (STACK*)malloc(sizeof(STACK));
	if(stack1 != NULL){

		init(stack1);
		add(10, stack1);
		add(20, stack1);
		add(30, stack1);
		show(stack1);
		del(stack1);
		printf("\n");
		show(stack1);
		del(stack1);
		printf("\n");
		show(stack1);
		del(stack1);
		printf("\n");
		show(stack1);

	} else {
		printf("Memory Allocation of Stack is Failed...");
	}
	return 0;
}
