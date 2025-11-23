#include <stdio.h>

int main() {
	int k;
	char x[30] = "2 minutes to 12.0";
	char *p = NULL;
	char y[30];
	
	p = x;
	
	while (sscanf(p, "%s", y) > 0) {
		k = printf("%s\n", y);
		p = p + k;
	}
	return 0;
}
