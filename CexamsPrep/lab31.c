#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
	
	int i;
	int apot1 = 0;
	int apot2 = 1;

	if(argc<2) exit(1);

	if(argv[1][0] == '+'){		//first orisma +
		for(i=2;i<argc;i++){
			apot1 += atoi(argv[i]); 		
		
		}
		printf("%d\n",apot1);
	}


	else if(argv[1][0] == '-'){		//first orisma -
		for(i=2;i<argc;i++){
			apot1 -= atoi(argv[i]); 		
		}
		printf("%d\n",apot1);
	}

	else if(argv[1][0] == '*'){		//first orisma *
		for(i=2;i<argc;i++){
			apot2 *= atoi(argv[i]); 		
		
		}
		printf("%d\n",apot2);
	}


	else if(argv[1][0] == '/'){		//first orisma /
		for(i=2;i<argc;i++){
			apot2 /= atoi(argv[i]); 		
		
		}
		printf("%d\n",apot2);
	}

	return 0;
}

	
