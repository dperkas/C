#include <stdio.h>
#include <stdlib.h>

int main(int argc,char  **argv){

        printf("Number of arguments: %d\n ", argc);
        printf("Name of program: %s\n ", argv[0]);

        printf("Arguments: ");
        for(int i=1; i < argc; i++){
                printf("%s\n ", argv[i]);
        }

        printf("\n");

        return 0;
}
