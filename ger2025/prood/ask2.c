#include <stdio.h>
#include <string.h>


int main(int argc, char **argv){
	int i,j;
	int counter=0;
	char *last;

	for(i = 0; i<argc; i++){
		counter++;
	}
	printf("%d\n",counter);

	last = argv[argc-1];

	for(j = strlen(last)-1 ; j >=0 ; j--){
		printf("%c",last[j]);
	}
	printf("\n");


	return 0;
}
