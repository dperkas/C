#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char ** argv){
	int N;
	int fd;
	char byte;
	int count = 0;
	char result;


	N = atoi(argv[1]);
	fd = open("file2.bin", O_RDONLY);
	if(fd < 0){
		printf("Problem with binary file!");
		return 1;
	}

	lseek(fd, -N, SEEK_END);
	read(fd, &byte, 1);
	printf("%d\n",byte);

	lseek(fd, 0, SEEK_SET);
	
	while(read(fd, &result, 1) > 0){
		if(result == 20){
			count++;
		}
	}
	printf("%d\n",count);


	close(fd);

	return 0;
}
