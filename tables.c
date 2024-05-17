#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	int *array;	//Is pointer, because it shows at the beggining of an array	

	printf("Input the size of the matrix: ");
	scanf("%d", &n);

	array = (int *)malloc(n * sizeof(int)); //memory allocate using malloc
	
	if(array == NULL){
		printf("Error, memory was not allocated\n");
		return 1;
	}

	//Input elements in the matrix
	for(int i = 0; i < n; i++){
		printf("Element %d : ", i+1);
		scanf("%d",&array[i]);     //scanf needs the &array, because it needs the address of the element
	}

	//print elements
	for(int i = 0; i < n; i++){
		printf("%d,", array[i]); //printf doesen't need & because it only prints the value
	}

	printf("\nThe array consists of %d elements. ", n);   


	printf("\n");

	//use 'free' to free the malloc space
	free(array);

	
	return 0;
}



