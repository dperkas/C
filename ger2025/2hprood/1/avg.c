#include <stdio.h>


int main(int argc, char **argv){
	FILE *infile;
	FILE *outfile;
	char buf[100];
	int count=0;
	int avg = 0;

	infile = fopen(argv[1],"r");
	if(infile == NULL){
		puts("Input file not found!");
		return 1;
	}
	outfile = fopen(argv[argc-1],"w");
	if(outfile ==NULL){
		puts("Couldn't create output.txt");
	}

	while(fgets(buf,100,infile) != NULL){
		fputs(buf,outfile);
		count++;
		if(count==3){
			break;
		}
	}




	return 0;
}	
