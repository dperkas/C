#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i,j;
	int counter=0;	

	if(argc<2){
		printf("Vale orismata!\n");
		exit(1);
	}	


	for(i=1; i<argc;i++){
		if(strlen(argv[i])<=4){
			counter++;
		}
	}
	printf("%d\n",counter);

	for(i=1; i<argc; i++){
		if(argv[i][0] == 'M' && argv[i][1]== 'Y'){
			printf("%s\n",argv[i]);
		}
	}




	return 0;
}
