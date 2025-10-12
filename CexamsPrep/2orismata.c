#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	int i;
	int sum = 0;

	if(argc<2){
		exit(1);
	}

	for(i=1; i<argc; i++){
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return 0;



}
