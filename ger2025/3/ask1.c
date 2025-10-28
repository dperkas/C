#include <stdio.h>
#include <string.h>



int main(int argc,char **argv){
	int i;
	int j;


	for(i = 1; i<argc; i++){
		for(j = 0; j<strlen(argv[i]); j++){
			if(argv[i][j]>= '0' && argv[i][j]<= '9'){
				//printf("%s\n",argv[i]);
				printf("%s\n",argv[i]);
				break;
			}
			else{				//den mpainei edw...
				printf("No word with number found!\n");
				break;	//edw kati ginetai lathos
			}
		}
	}


	return 0;
}
