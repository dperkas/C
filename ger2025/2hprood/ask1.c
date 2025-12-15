#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char **argv){
	int F;
	int N;
	char resault;
	char resaultByte;
	int counter = 0;


	N = atoi(argv[2]);
	F = open(argv[1], O_RDONLY);
	if(F < 0){
		puts("Problem with binary file.");
		return 1;
	}

	lseek(F, N, SEEK_SET);
	read(F, &resault, 1);
	printf("%c\n", resault);

	lseek(F, 0, SEEK_SET);


	while(read(F, &resaultByte, 1) >0 ){
		if(resaultByte == N){
			counter++;
		}
	}
	printf("%d\n", counter);




	return 0;
}
