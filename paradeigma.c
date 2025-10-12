#include <stdio.h>

int main(){
	void swap(int *x, int *y);

	int a = 5;
	int b=7;

	printf("a = %d\n",a);
	printf("&a = %p\n",&a);

	swap(&a,&b);	// edw pare th dieuthunsh ths metavlhths kai valth sth sunarthsh
			// ousiastika dinw ston pointer & kai pairnw apo auton *
			
	printf("%d %d\n", a,b);

	return 0;
	}

	void swap(int *x, int *y){ /*edw pare/diavase th TIMH sth dieuthunsh pou deixnei o x kai o y*/
		int t;
		t = *x;
		*x=*y;
		*y=t;
		return;
		}
