#include <stdio.h>
#include <string.h>


int main(int argc, char **argv){
        int i,j;
        int counter=0;
        int acounter=0;
        char *last;		// it has to be a pointer, it points to a char inside an argument

        for(i=1; i <argc; i++){
                if(strlen(argv[i])<=4)
                        counter++;
        }
        printf("%d\n",counter);

        last = argv[argc-1];

        for(i=argc-1; i <argc; i++){			 //	i from argc-1(last string, eg 5 if all arguments are 6) to the end(eg 6), so you just see the final string
              	for(j =0;j<strlen(last);j++){	//	j from 0 to the lenght of the last string(so just run the last string char by char)
					if(argv[i][j]=='a'){
    	               acounter++;
					}
      	       	}
     	}

        




                return 0;
}

