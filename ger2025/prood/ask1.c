#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	int counter=0;
	int i,j;
	char first;
	char last;

	for(i = 1; i <argc;i++){
		for(j = 0; j < strlen(argv[i]);j++){
			if(strlen(argv[i])%2==0){	// lenght%2==0: even lenght
				counter++;
				break;
			}
		}
	}
	printf("%d\n",counter);

	first = argv[argc-1][0];	
	last = argv[argc-1][strlen(argv[argc-1])-1];
	printf("%c%c\n",first,last);



	return 0;
}
