#include <stdio.h>
#include <stdio.h>
#include <stdio.h>



int main(){


	FILE *infile, *outfile;
	char buf[81];

	if ((infile = fopen("original.txt", "r")) == NULL)
		return 1;
	if ((outfile = fopen("copy.txt", "w")) == NULL)
		return 1;

	while(fscanf(infile, "%s", buf) != EOF){
		fprintf(outfile, "%s", buf); 		//oles oi lekseis kollhta
		fprintf(stdout, "%s", buf); 		//emfanish sthn othonh
					
	}
	fclose(infile);
	fclose(outfile);
	return 0;







	return 0;
}
