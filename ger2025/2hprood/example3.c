#include <stdio.h>
#include <string.h>

int main(){
	FILE *infile;
	char buf[101];
	int maxLenght = 0;
	char *maxWord;

	infile = fopen("example2.txt","r");

	if(infile == NULL){	// panta ginetai o elegxos 
		printf("File example2.txt not found\n");
		return 1;
	}
	

	// megaluterh se mhkos sumvoloseira
	// an uparxoun panw apo mia, kratame thn prwth emfanish
	while(fscanf(infile, "%s", buf) != EOF){
		if(strlen(buf)> maxLenght){
			maxWord = buf;
			maxLenght = strlen(buf);
		}
	}
	
	
	printf("max word is: %s\n",maxWord);

	fclose(infile);

	return 0;
}
