#include <stdio.h>
#include <string.h>

int main(){
	FILE *infile;
	char buf[101], maxWord[101];
	int maxLenght = 0;

	if((infile=fopen("example2.txt", "r")) == NULL){	// panta ginetai o elegxos 
		return 1;
	}
	

	// megaluterh se mhkos sumvoloseira
	// an uparxoun panw apo mia, kratame thn prwth emfanish
	strcpy(maxWord, "");
	while(fscanf(infile, "%s", buf) != EOF){
		if(strlen(buf)> maxLenght){

