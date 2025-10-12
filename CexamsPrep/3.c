#include <stdio.h>
#include <stdlib.h>

int main(){

	char c;
	int i;
	char *pc = NULL;
	int *pi = NULL;
	
	pc = &c;
	pi = &i;

	printf("pc = %p, pc+1= %p\n", pc, pc+1);
	printf("pi = %p, pi+1= %p\n", pi, pi+1);

	
	printf("char: %ld bytes\n",sizeof(char));
	printf("int: %ld bytes\n",sizeof(int));

	return 0;
}

