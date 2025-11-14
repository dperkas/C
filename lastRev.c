#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	int count=0;
	int counta=0;
	char *last;

	last = argv[argc-1];

	for(i = strlen(last); i>=0;i--)
		printf("%c",last[i]);

	printf("\n");
	return 0;
}
