#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>


int main(){
	int fd;
	int x;

	fd = open("enabnn.bin", O_RDONLY);
	if(fd < 0){
		puts("Problem with binary file");
		return 1;
	}

	
	while(read(fd, &x, sizeof(int)) > 0){
		printf("x = %d\n", x);
	}

	close(fd);






	return 0;
}
