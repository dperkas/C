#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i,j;
	char *newlong = argv[2];	// o megaluteros deixnei sthn arxh, sto prwto orisma

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






		

		return 0;
}
