#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){

	int i;
	int num, min;
	int max = atoi(argv[1]);

	if(argc<3){
		printf("At least 2 numbers must be iserted");
		exit(1);
	}

	for(i=1; i<argc; i++){			//find the max number
		num = atoi(argv[i]);

		if(num>max){
			max = num;
		}
	}
	for(i=argc-1; i>0; i--){		//print the numbers the other way
		printf("%s \n", argv[i]);
	}


	printf("max number is: %d\n",max);








	return 0;
}
