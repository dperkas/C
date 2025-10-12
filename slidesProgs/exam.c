#include <stdio.h>
int power(int base, int n);

int main(){
	int x,y,k,n,res;

	x=2; y=3; k=4; n=2;
	res = power(x,k);
	printf("%d \n", res);
	res = power(y,n);
	printf("%d \n", res);

	return 0;
}

int power(int base, int n) {
	int i,p;
	for (i = p =1; i<=n; i++)
		p=p*base;
	return p;
}
