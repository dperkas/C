#include <stdio.h>

void f(void) {
	static int y=0;  //y is static, so it's value is saved every time we run the program
	y++;
	printf("%d\n", y);
}

int main() {
	int i;
	for (i=0; i<5; i++)
		f();
	return 0;
}


//First time that f runs, y is created.
//y++, goes to 1
//when f runs for the second time, the "static int y=0" is not executed, so "y++" runs again
//so y goes to 2
//etc.
