#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){

	int i;
	int j;
	int sum = 0;
	int mo = 1;
	int positive;


	if(argc<4){
		printf("Input must be at least 3 digits.\n");
		exit(1);
		}

	for(i=1; i<argc; i++){
		sum += atoi(argv[i]);
	}

	mo = sum/(argc-1);


	for(j=1; j<argc; j++){
		if(atoi(argv[j])>0){
			positive=1;
		}
		else if(atoi(argv[j])<0){
			positive=-1;
				}

	}

	if(positive==1){
		printf("Ther is at least one negative number");
	}
	else if(positive==-1){
		printf("All numbers are positive\n");
	}

	printf("The sum of the numbers is: %d\n", sum);
	printf("The mean value of the numbers is: %d\n", mo);


	return 0;
}



