#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	char *target ="MYY502";		// edw etsi, h char targer[6] = MYY502 ?
	char *last;
	
	for(i=1;i<argc;i++){
		if(strstr(argv[i],target) != NULL){
			printf("%s\n",argv[i]);
			break;
		}
	}

	//last = argv[argc-1];

	
	for(i=argc-1; i<argc;i++){
		for(j=0,j<strlen(argv[i]);j++){
			





	return 0;
}
