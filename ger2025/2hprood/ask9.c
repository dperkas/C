#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char **argv){
	int N;
	int f;
	char fbyte;
	char lbyte;
	int result = 0;
	char pos;
	int count = 0;
	int flag = 1;

	f = open("file5.bin", O_RDONLY);
	if(f < 0){
		return 1;
	}

	N = atoi(argv[1]);

	lseek(f, 0, SEEK_SET);
	read(f, &fbyte,1);
	lseek(f, -1, SEEK_END);
	read(f, &lbyte,1);
	result = fbyte + lbyte;

	printf("%d\n",result);
	lseek(f, 0, SEEK_SET);


	while(read(f, &pos, 1) > 0){
		count++;
		if(pos == N){
			flag = 0;
			printf("%d\n",count);
			break;
		}
	}
	if(flag==1){
		printf("No N found\n");
	}

	
	close(f);
	return 0;
}
