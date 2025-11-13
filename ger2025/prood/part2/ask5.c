#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i,j;
	int len;

	if(argc<2){
		printf("Vale orismata!");
		return 1;
	}

	len = atoi(argv[1]);
	
	for(i=1;i<argc;i++){		// mporei na ginei kai gia i = 2, xwris kai to argv[1]
		if(strlen(argv[i])>=len){
			printf("%s\n",argv[i]);
		}
	}
	

	return 0;
}
