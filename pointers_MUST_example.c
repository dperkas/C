#include <stdio.h>


int main(){


	int x = 100;
	int *y = &x;


	printf("x: %d\n",x);
	printf("&x: %p\n",&x);
	printf("y: %p\n",y);
	printf("*y: %d\n",*y);
	printf("&y: %p\n",&y);

	return 0;

	}
