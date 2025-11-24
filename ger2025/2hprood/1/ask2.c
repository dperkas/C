#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *infile;
	FILE *posfile;
	FILE *negfile;
	char buf[50];
	int *array;
	int n;

	infile = fopen("data.txt","r");
	if(infile == NULL){
		puts("Problem with input file.");
		return 1;
	}
	posfile = fopen("positive.txt","w");	
	if(posfile == NULL){
		return 1;
		puts("Problem with positive.txt file.");
	}
	negfile = fopen("negative.txt","w");	
	if(negfile == NULL){
		return 1;
		puts("Problem with negative.txt file.");
	}

	while(fscanf(infile, "%s", buf) != EOF) {
		n++;
	}
	array = (int*)malloc(n*sizeof(int));
	printf("numbers in file: %d\n",n);

	//while(fgets(buf,50,infile) != NULL){

	//}



	free(array);
	fclose(infile);
	fclose(posfile);
	fclose(negfile);


	return 0;
}
