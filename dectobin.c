#include <stdio.h>


int main(){

	unsigned int n;
	int upoloip[32];
	int i;

	printf("Input a number in dec: ");
	scanf("%d", &n );

	while(n>0){
		upoloip[i] = n%2;
		n = n/2;
		i++;
	}
	printf("In binary: ");
	for (int j = i - 1; j >= 0; j--) {	//j = i-1 einai to teleutaio. Ksekina apo to teleutaio kai phgaine mexri to prwto
		printf("%d", upoloip[j]);	//tupwse anapoda ton pinaka
	}					
	printf("\n");


	return 0;

}
