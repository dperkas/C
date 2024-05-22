#include <stdio.h>
#include <stdlib.h>


struct listnode{
	int value;
	struct listnode *next;			/* Pointer to the next node in the list  */
};

typedef struct listnode listnode_t;		/* Creating an alias listnode_t of type struct listnode so that I can use
					   	this instead of struct listnode every time */


void find_sum(listnode_t *node){		/* Calculate the sum of all nodes in the list. Without typedef it would be 
					   	void find_sum(struct listnode *node) */

	int sum = 0;

	while(node != NULL){
		sum += node->value;
		node = node->next;
	}
	printf("Sum of numbers: %d\n ", sum);
}

void bubble_sort(listnode_t *head) {		/* Added bubble sort algorithm to sort elements  */
    int swapped;
    listnode_t *ptr;
    listnode_t *last = NULL;

    						/* Check if list is empty or has only one element */
    if (head == NULL || head->next == NULL) {
        return;
    }

    do {
        swapped = 0;
        ptr = head;

        while (ptr->next != last) {
            if (ptr->value > ptr->next->value) {
                // Swap values
                int temp = ptr->value;
                ptr->value = ptr->next->value;
                ptr->next->value = temp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}

void print_list(listnode_t *head) {		/* Added function to print sored list  */
    listnode_t *current = head;

    printf("Sorted list: ");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}


void free_list(listnode_t *node){	/* free allocated memory from every node  */
	
	listnode_t*  temp;		/* Temporary pointer to hold the current node being freed  */

	while(node != NULL){
		temp = node;
		node = node->next;
		free(temp);
	}
}


int main(){

	listnode_t *node;
	listnode_t *head = NULL;	/* Always must be set to NULL, or we will get memory leakes  */
	int n;

	printf("How many elements?\n");
	scanf("%d", &n);

	if(n <= 0){
		printf("The number of elements must be positive \n");
		return 1;
	}

	for(int i = 0 ; i < n; i++){
		node = (listnode_t *)malloc(sizeof(listnode_t));	/* Allocate memory for one node  */
		if(node == NULL){
			printf("Memory allocation failed \n");
			exit(1);
		}

		scanf("%d", &node->value);				/* Read and store the number in the node.  */


									/* Insert the node at the beggining of the list  */
		node->next = head;				
		head = node;
	}


	find_sum(head);
	bubble_sort(head);
	print_list(head);
	free_list(head);


	return 0;

}


