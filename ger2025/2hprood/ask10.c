#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char **argv){
	int n;
	int fd;
	char maxbyte = 0;
	char byte;


	fd = open(argv[1], O_RDONLY);
	if(fd < 0){
		puts("blah");
		return 1;
	}
	
	read(fd, &n, 4);
	printf("%d\n",n);


	while(read(fd, &byte, 1) > 0){
		if(byte > maxbyte){
			maxbyte = byte;
		}
	}

	printf("%d\n",maxbyte);


	close(fd);
	
	return 0;
}
