#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char **argv){
	int i,j;
	int counter=0;
	int acounter=0;
	char *last;
	
	if(argc<2){
		printf("Vale orismata!\n");
		exit(1);
	}

	for(i=1; i <argc; i++){
		if(strlen(argv[i])<=4)
			counter++;
	}
	printf("%d\n",counter);

	last = argv[argc-1];

	for(i=argc-1; i <argc; i++){
		for(j =0;j<strlen(last);j++){
			if(argv[i][j]=='a'){
				acounter++;
			}
		}
	}

	printf("%d\n", acounter);




		return 0;
}
