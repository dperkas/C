#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>


int main(){
	int N[] = {1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0};
	int xor = 0;
	int i;
	int fd;

	for(i = 0; i < 14; i++){
		xor =xor ^  N[i];
	}
	printf("%d\n",xor);

	fd = open("result",O_WRONLY| O_CREAT | O_TRUNC, S_IRUSR | S_IRGRP | S_IROTH );


	return 0;
}
