#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char **argv){
	int i,j;
	int sum=0;
	
	if(argc<2){
		printf("0\n");
	}
	else{
		for(i=1; i<argc;i++){
			//for(j=0; j<strlen(argv[i]);j++){
				//if(argv[i]>='0' && argv[i]<='9'){
				if(isdigit(argv[i])){
					sum += atoi(argv[i]);
				}
				//}
			//}
		}
	printf("%d\n",sum);
	}



	return 0;
}
