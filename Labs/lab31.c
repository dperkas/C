#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]){

    char operator;
    int i;
    int sum=0;
    float div=0;
    int mult=1;
    int min = 0;

    operator=(char)(argv[1][0]);


    if(operator =='+'){
        for (i=0; i<argc-2; i++){
            sum = sum +atoi(argv[2+i]);
        }
        printf("Apotelesma: %d\n",sum);

    }

    else if(operator =='/'){
        div=atoi(argv[2])/atoi(argv[3]);
        printf("Apotelesma: %f\n",div);
    }

    else if(operator =='x'){
        for (i=0; i<argc-2; i++){
            mult = mult*atoi(argv[2+i]);
        }
        printf("Apotelesma: %d\n",mult);
    }

    else if(operator=='-'){
        for (i=0; i<argc-2; i++){
            min =-(min + atoi(argv[2+i]));
        }
        printf("Apotelesma: %d\n",min);
    }

}