#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	int max=0;
	char *newlong;

	if(argc<1){
		printf("Vale orismata!");
	}


	for(i = 1;i<argc;i++){
		if(strlen(argv[i])>max){	// ginetai me strcmp kalutera, des ask41.c
			argv[i]==newlong;		//
			max++;
		}
	}
	printf("%s\n",newlong);






		

		return 0;
}
