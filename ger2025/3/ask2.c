#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	char **target;
	char last;
	
/*
	for(i=1; i<argc; i++){
		for(j=0; j<strlen(argv[i]);j++) {
			if(argv[i][j]==target){
				printf("%s\n",argv[i]);
				break;
			}
		}
	}
*/

	for(i=1; i<argc; i++){
		for(j=0; j<strlen(argv[i]);j++) {
			if(strcmp(argv[i][j],target)==0){
				printf("%s\n",argv[i]);
				break;
			}
		}
	}





	return 0;
}
