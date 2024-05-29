/* Create a file 'testfile.txt', to find the longest word inside it  */

#include <stdio.h>
#include <string.h>

int main(){

	FILE* infile;
	char buf[101];
	char maxWord[101];
	int maxLength = 0;

	if((infile = fopen("testfile.txt", "r")) == NULL )
		return 1;

	strcpy(maxWord, "");

	while(fscanf(infile, "%s", buf) != EOF){
		if (strlen(buf)>maxLength) {
			strcpy(maxWord, buf);
			maxLength = strlen(buf);
		}
	}

	fprintf(stdout, "Max string is: %s with length %d\n", maxWord, maxLength);
	
	return 0;
}
