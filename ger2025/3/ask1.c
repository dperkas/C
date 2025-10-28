#include <stdio.h>
#include <string.h>


int main(int argc,char **argv){
	int i;
	int j;
	int count;

	for(i = 1; i<argc; i++){
		for(j = 0; j<strlen(argv[i]); j++){
			if(argv[i][j]>= '0' && argv[i][j]<= '9'){
				printf("%s\n",argv[i]);
				count++;
				break;
			}
		}
	}
	if(count == 0){
		printf("No word with number found!\n");
	}

	return 0;
}
