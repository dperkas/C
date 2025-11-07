#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	char *target ="MYY502";
	
	for(i=1;i<argc;i++){
		//for(j=0; j<strlen(argv[i]);j++){
			if(strstr(argv[i],target) != NULL){
				printf("%s\n",argv[i]);
				break;
			}
		//}
	}






	return 0;
}
