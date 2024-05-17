/*
 *
 *
 *This is also lab 3 from Systes Programming course
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char* argv[]){

	char operator;
	int i;
	int sum = 0;
	int mult = 1;
	float div = 1;


	operator = (char)(argv[1][0]);

	 if(operator == '+'){
		for(i = 0 ; i<argc-2 ; i++){
			sum = sum + atoi(argv[2+i]);
		}
		printf("Sum resalut: %d\n", sum);
	}

	
	 if(operator == 'x'){			/*Using x as the mult operator, because you can't input * on the command line, it's a different command */
		for(i = 0 ; i<argc-2 ; i++){
			mult = mult * atoi(argv[2+i]);
		}
		printf("Multiply resalut: %d\n", mult);

	}
	
	 if(operator == '/'){
		for(i = 0 ; i<argc-2 ; i++){
			div = div/atoi(argv[2+i]);
		}		
		printf("Div resalut: %f\n", div);
	 }
	 



		







}


