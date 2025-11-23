#include <stdio.h>

int main() {
	char lula[]="lula";
	char *ptr = lula;
	
	puts(lula);
	puts(" > ");
	puts(ptr + 2); // scanf("%s\n", ptr + 2);
	
	
	printf("%s > %s\n", lula, ptr+2);
	return 0;
}
