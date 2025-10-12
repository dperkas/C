#include <stdio.h>

int main(){
	int x = 5;
	int *p = &x;
	int a[5]={1,2,3,4,5};
	int i;

	printf("Value of x is:%d\n ",x);
	printf("Address of x(&x) is:%p\n ",p);

	printf("a[i] is:%d\n ",a[i]);
	printf("&a[i] is:%p\n ",&a[i]);
	printf("a is %p\n ",a);
	printf("*(a+i) is:%d\n ",*(a+i));
	printf("a+i is:%p\n ",a+i);

	return 0;
	}

