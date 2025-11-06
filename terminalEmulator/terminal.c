#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char input[100];

		printf("Welcome to my terminal. Type '/'exit'/' to leave. \n");
	do{
		printf("user@hostname:~/$ ");
		fgets(input, sizeof(input),stdin);	//fgets to read the whole line, not scanf.
		if(strcmp("exit\n", input)!=0){		// exit'\'n, because fgets reads the ending character.
			printf("Nice one... \n");
			
		}
	}while(strcmp("exit\n", input)!=0);
	printf("Bye!\n");

	return 0;
}
