#include <stdio.h>

void initarr(int *x, int n);

int main(){

int a[10];
initarr(a, 10);


return 0;
}

void initarr(int *x, int n){
	int i;
	for(i=0;i<n;i++)
		x[i]=i;
}


