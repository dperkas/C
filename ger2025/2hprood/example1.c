#include <stdio.h>

int main(){
	char buf[10];
	FILE *infile;

	infile = fopen("example.txt","r");

	if(infile == NULL){
		printf("Problem with \"example.txt\". File does not exist.\n");
		return 1;
	}

	while(fgets(buf,10,infile) != NULL){
		printf("[%s]", buf);		// [] to show that buf[10] prints 9 chars
	}

	fclose(infile);




	return 0;
}
