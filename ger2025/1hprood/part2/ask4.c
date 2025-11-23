#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char **argv){
	int i,j;
	int flag;

	for(i=1; i<argc; i++){
		for(j=0;j<strlen(argv[i]);j++){
			if(isdigit(argv[i][j])){
				printf("%s\n",argv[i]);
				flag = 1;
				break;
			}
		}
	}
	if(flag != 1){
		printf("No word with number found!\n");
	}


	return 0;
}
