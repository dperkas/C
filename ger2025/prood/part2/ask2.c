#include <stdio.h>
#include <string.h>


int main(int argc, char **argv){
	int i,j;
	char *shortest = NULL;
	int len=100;

	for(i=1;i<argc;i++){
		if(strlen(argv[i]) <= len){
			len = strlen(argv[i]);
			shortest = argv[i];
		}
	}


	printf("%s\n",shortest);

	return 0;
}
