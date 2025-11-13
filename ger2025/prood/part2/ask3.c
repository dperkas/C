#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	char *target = "MYY502";
	int res;

	for(i=1;i<argc;i++){
		if(strstr(argv[i],target) != NULL){
			printf("%s",argv[i]);
		}
	}
	for(i=1;i<argc;i++){
		for(j=1;j<argv[i];j++){






	return 0;
}
