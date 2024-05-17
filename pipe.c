#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

int main(void){

	int fd[2];
	int nbytes;
	pid_t childpid;
	char string[] = "Hello World \n";
	char readbuffer[80];

	pipe(fd);

	if((childpid = fork()) == -1){
		perror("fork");
		exit(1);
	}
	
	if(childpid == 0){

		/* Child process closes input side of pipe */
		close(fd[0]);

		/* Send string through the output side of the pipe */
		write(fd[1], string, strlen(string));

		exit(0);
	}
	else{
		/* Parent closes output side of the pipe */
		close(fd[1]);

		/* Read in a string from the pipe */
		nbytes = read(fd[0], readbuffer, sizeof(readbuffer));
		printf("Recieving string: %s", readbuffer);
	}

	return 0;
}
