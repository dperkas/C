#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char input[100];

	do
	{
		printf("Dwse eisodo, gia na termatisw dwse to \'exit\'\n");
		fgets(input, 100, stdin);
		
		if (strcmp(input, "exit\n") != 0) {
			printf("%s\n", input);
		}
	} while (strcmp(input, "exit\n") != 0);
	
	return 0;
}
