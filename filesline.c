#include <stdio.h>

int main(){

	FILE* infile;
	FILE* outfile;

	char buf[10];


	if((infile = fopen("original.txt", "r")) == NULL)
		return 1;
	if((outfile = fopen("copy.txt", "w")) == NULL)
		return 1;

	while(fgets(buf, 10, infile) != NULL){
			fputs(buf, outfile);
			}

	fclose(infile);
	fclose(outfile);

	return 0;
}
