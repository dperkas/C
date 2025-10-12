#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

	int i;
	int max_len = 0;
	char *longest_word = argv[1];


	for(i = 1; i<argc; i++){
		if(strlen(argv[i]) > max_len){
			max_len = strlen(argv[i]);			//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			longest_word = argv[i];				//!!!!!!!!!!!!!LONGEST WORD !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		}							//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				
	}

	printf("Longest word is: %s\n", longest_word);


	char *last = argv[argc-1];				//ANAPODA H TELEUTAIA LEKSH
	int len = strlen(last);

	for(i = len - 1; i>=0; i--){				//PROSOXH
		printf("%c\n",last[i]);
	}
	printf("\n");

	return 0;
}
