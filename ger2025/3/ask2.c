#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	char target[6] = "MYY502";
	int  count;
	char last;
	
	for(i = 1; i<argc; i++){
		if( strstr(argv[i],target) != NULL){
			printf("%s\n",argv[i]);
			count++;
		}
	}

	if(count == 0){
		printf("No word found with MYY502.\n");
	}


	last = argv[argc-1][strlen(argv[argc-1])-1];
	printf("%c\n",last);


	return 0;
}
