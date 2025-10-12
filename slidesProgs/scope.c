#include <stdio.h>
#include "myscope.h"


int number;

int main() {
	int y;
	number = 5;

	y= f(4*SCALE);
	printf("%d,%d\n", number,y);
	return 0;
}
