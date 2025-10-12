#include <stdio.h>


int main(int argc,char **argv){

	int i;

	printf("arcg: %d\n", argc);
	printf("Program name: %s\n", argv[0]);
	printf("Printing argv[i]:\n");
	

	for (i = 1; i < argc; i++){
		printf("%s\n ",argv[i]);
	}

	return 0;
}
