#include <stdio.h>

int main(){
	int a =3;
	int b=14;
	int c=7;
	float res;

	int calculatemo(int *x,int *y,int *z);

	res = calculatemo(&a,&b,&c);
	printf("mo= &f\n", res);

	return 0;
}
int calculatemo(int *x,int *y,int *z){
	float mo;
	mo = (*x+*y+*z)/3;
}
