#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat>

int main(int argc, char **argv){
	int F;
	int N;
	char target;
	int i;

	N atoi(argv[2]);
	F = open(argv[1], O_RDONLY);
	if(F < 0 ){
		puts("Problem with binary file.");
		return 1;
	}

	lseek(F, N, SEEK_SET);
	read(F, &target, 1);
	printf("%c\n",target );

	lseek(F, 0, SEEK_SET);



	return 0;
}
