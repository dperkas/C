#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(){
	int fd;
	int x = 7;

	fd = open("example.bin", O_WRONLY | O_CREAT| O_TRUNC, S_IRWXU| S_IRGRP);

	if(fd < 0){
		printf("Failed to read binary file.\n");
		return 1;
	}
	
	write(fd, &x, sizeof(int));
	x = 10;
	write(fd, &x, sizeof(int));


	close(fd);

	return 0;







	return 0;
}
