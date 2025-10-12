#include <stdio.h>
void swap (int *x1, int *x2);

int main(){
	int a,b;
	a=6;
	b=7;
	swap(&a,&b);
	printf("a and b were 6 7, now they are:\n");
	printf("%d %d\n", a, b);
	return 0;
}

void swap(int *x1, int *x2){
	int temp;
	temp = *x1;
	*x1 = *x2;
	*x2 = temp;
	return;
}
