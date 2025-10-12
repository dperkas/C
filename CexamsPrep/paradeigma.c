#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

	int i;
	int count = 0;
	char *target = "MYY502";

	for(i=1; i<argc; i++){
		if(strcmp(argv[i],target) == 0){
			count++;
		}
	}

	printf("Target string is showd %d times.\n",count);

	char last = argv[argc-1][strlen(argv[argc-1])-1];

	if(last >= '0' && last <= '9'){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}




	return 0;

}

