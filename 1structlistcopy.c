#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	int data;
	struct list *next;
}List;

void add_list(List *node){
	int sum = 0;

	while(node != NULL){
		sum += node->data;
		node = node->next;
	}
	printf("Sum of numbers: %d\n", sum);
}

void free_list(List *node){

	List* temp;

	while(node != NULL){
		temp = node;
		node = node->next;
		free(temp);
	}
	printf("Memory freed.");
}

int main(){

	List* node;
	List* head = NULL;
	int n;

	printf("How many nodes? \n");
	scanf("%d", &n);

	node = (List *)malloc(n*sizeof(List));
	if(node == NULL){
		printf("Memory allocation failed. \n");
		exit(1);
	}

	scanf("%d", &node->data);

	if(head == NULL){
		node->next = NULL;
		head = node;
	}
	else{
		node->next = head;
		head = node;
	}


	add_list(head);
	free_list(head);

	
	return 0;
}





