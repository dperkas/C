#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>


int main(int argc, char **argv){
	int fd;
	int fdwr;
	int N;
	char byte;
	char result;
	int flag = 0;
	int count =0;



	N = atoi(argv[1]);

	fd = open("file4.bin", O_RDONLY );
	if(fd < 0){
		puts("Problem with binary file!");
		return 1;
	}

	lseek(fd, N-1, SEEK_SET);
	read(fd, &byte,1);
	printf("%d\n", byte);
	fdwr = open("file_result.bin", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU | S_IRWXG | S_IRWXO);
	if(fdwr < 0){
		puts("Problem with second binary file!");
		return 1;
	}



	write(fdwr, &byte, 1);

	lseek(fd, 0, SEEK_SET);



	while(read(fd,&result,1) > 0){
		count++;
		if(result == N){
			printf("%d\n",count);
			flag = 1;
		}
	}

	if(flag = 0){
		printf("Not a byte with such value\n");
	}


	close(fd);
	close(fdwr);

	return 0;
}
