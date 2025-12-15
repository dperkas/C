#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char ** argv){
	int fd;
	int N;
	char byte;
	int xor = 0;
	char result;

	N = atoi(argv[1]);
	fd = open("file3.bin", O_RDWR);
	if(fd < 0){
		puts("Problem with binary file!");
		return 1;
	}
	
	lseek(fd, N-1, SEEK_SET);
	read(fd, &byte, 1);
	printf("%d\n",byte);
	write(fd,"15",1);
	
	lseek(fd, 0, SEEK_SET);
	
	while(read(fd, &result, 1) > 0){
		xor = xor ^ result;
	}
	printf("%d\n", xor);


	return 0;
}
