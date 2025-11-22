#include <stdio.h>
#include <string.h>

int main(){
	FILE *infile;
	char buf[101], maxWord[101];
	int maxLenght = 0;

	if((infile=fopen("example2.txt", "r")) == NULL){	// panta ginetai o elegxos 
		return 1;
	}
	
	// metraei poses allages grammwn
	// oso h fgets diavazei kai den dinei NULL(h fgets diavazei grammes, h' max xarakthra)


