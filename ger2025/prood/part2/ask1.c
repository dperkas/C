#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i,j;
	char *shortest = NULL;
	int max = 100;

	for(i=1; i<argc;i++){
		if(strlen(argv[i]) <=  max){
			max=strlen(argv[i]);
			shortest=argv[i];
		}
	}
	printf("%s\n",shortest);






	

	return 0;
}
