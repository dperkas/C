#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv){
	int i;
	int len;

	if(argc != 2){
		printf("Wrong number of arguments!\n");
		return 0;
	}

	if(strncmp(argv[1],"www.",4) != 0){
		printf("Invalid input, please enter a URL\n");
	}
	



	return 0;
}
