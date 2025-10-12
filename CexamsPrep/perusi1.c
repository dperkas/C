#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

	int i;
	char *target = "MYY505";
	int counter = 0;

	if(argc < 2){
		printf("vale kai allous arithmous gamw");
		exit(1);
	}

	for(i=1; i<argc; i++){
		if(strcmp(argv[i],target) == 0){
			counter ++;
		}
	}
								//!!!!!VRISKEI POSES FORES YPARXEI TO MYY505 
	char last = argv[argc-1][strlen(argv[argc-1]) -1];	//ETSI ORIZETAI O TELEUTAIOS XARAKTHRAS TOY TELEUTAIOY ORISMATOS

	if(last >= '0' && last <= '9'){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}



	printf("String MYY505 is shown %d times. \n", counter);


				

	















	return 0;
}
