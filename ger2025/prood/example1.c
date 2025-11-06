#include <stdio.h>


int main() {
	char test1[5], test2[5];
	scanf("%s", test1);
	printf("test1=%s\n", test1);
	gets(test2); // gets doesn't ignore spaces before input. Doesn't work here
	printf("test2=%s\n", test2);
	return 0;
}
