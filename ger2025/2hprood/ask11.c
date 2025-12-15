#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char **argv){
	int f;
	int n;
	char byte;
	char minbyte;
	int first = 1;

	f = open(argv[1], O_RDONLY);
	if(f < 0){
		puts("Problem with binary file!");
	}

	lseek(f, -8, SEEK_END);

	read(f, &n, 4);
	printf("%d\n",n);

	lseek(f, 0, SEEK_SET);

	while(read(f, &byte, 1) > 0){
		if(first == 1){
			minbyte = byte;
			first = 0;
		}
		else if(byte < minbyte){
			minbyte = byte;
		}
	}
	printf("%d\n",minbyte);

	return 0;
}
