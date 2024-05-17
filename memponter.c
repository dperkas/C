#include <stdio.h>

int main(){

	int var = 5;
	int *p;

	p = &var;

	printf("Address of var : %p\n" , &var);
	printf("Adress of pointer p: %p\n", &p);
	printf("Value of p: %p\n:", p);
	printf("Value of var: %d\n:",var);
	printf("Value of *p: %d\n:",*p);

	return 0;

}
