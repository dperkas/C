#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i,j;
	int lenght = 100;
	char *target = "MYY502";

	for(i=1; i<argc;i++){
		if(strlen(argv[i]) <  lenght){
			lenght=strlen(argv[i]);
		}
	}
	for(i=1;i<argc;i++){
		if(strlen(argv[i])==lenght){
			printf("%s\n",argv[i]);
		}
	}

	for(i=1; i<argc;i++){
		if(strstr(argv[i],target) != NULL){
			printf("%s\n",argv[i]);
		}
	}




	

	return 0;
}
