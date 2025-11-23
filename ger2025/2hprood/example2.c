#include <stdio.h>

int main() {
	FILE *infile, *outfile;
	char buf[81];
	int count = 0;
	
	infile = fopen("example.txt", "r");
	if (infile == NULL) {
		puts("The file does not exists");
		return 0;
	}
	
	outfile = fopen("example_copied.txt", "w");
	if (outfile == NULL) {
		puts("Cannot create the file");
		return 0;
	}
	
	while (fscanf(infile, "%s", buf) != EOF) {
		count++;
		fprintf(outfile, "%s ", buf);	// copy buf(infile) to outfile
		fprintf(stdout, "%s ", buf);	// print buff(infile) in screen
	}
	printf("\n");
	printf("Words: %d\n", count);
	
	fclose(infile);
	fclose(outfile);
	return 0;
}
