#include <stdio.h>

int main(){
	
	char str[10];

	fgets(str, 9, stdin);
	printf("%s\n", str);

	return 0;

}

