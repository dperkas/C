#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i,j;
	char *newlong = argv[2];	// o megaluteros deixnei sthn arxh, sto prwto orisma
	char *last;

	if(argc<2){
		printf("Vale orismata!\n");
		exit(1);
	}


	for(i = 1;i<argc;i++){
		if(strlen(argv[i]) > strlen(newlong)){	// 
			newlong=argv[i];		// kanw anathesh, =, oxi ==
		}
	}
	printf("%s\n",newlong);


	last=argv[argc-1];
	
	for(j=strlen(last)-1;j>=0;j--){
		printf("%c",last[j]);
	}
	printf("\n");

	/*
	for(i=argc-1;i<argc;i++){
		for(j=strlen(argv[i]);j>=0;j--){
			printf("%c\n",argv[i][j]);
		}
	}
	*/




		

		return 0;
}
