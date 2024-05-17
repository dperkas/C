#include <stdio.h>
#include <fcntl.h>

void main(){

	int fd;
	fd = fopen("foo", O_WRONLY | O_CREAT, 0644);
	pwrite(fd,"Hello World!", 12);
	close(fd);
}
