#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv){

	int i;
	char *target = "MYY502";
	int count = 0;

	for(i = 1; i< argc; i++){
		if(strcmp(argv[i],target) == 0){
			count++;
		}
	}

		


	


	return 0;
}
