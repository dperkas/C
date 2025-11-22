#include <stdio.h>


int main(){
	FILE *infile, *outfile;
	char buf[81];	//pipeline
	int count=0;

	infile = fopen("example.txt", "r");
	if(infile == NULL){
		puts("The file does not exist");
		return 0;
	}

	outfile = fopen("example_copied.txt", "w");
	if(outfile ==NULL){
		puts("Cannot create the file");
		return 0;
	}

	while(fscanf(infile, "%s",buf) != EOF){
		count++;		// count the words in the file
		//...
	}
