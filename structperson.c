#include <stdio.h>
#include <string.h>

struct person{
	char name[20];
	int age;
};

struct person inc_age(struct person x){
	x.age +=1;
	return x;
}

void inc_age_ptr(struct person* x){	/* Better implementation, creating a function. Use pointer *x  */
	x->age +=1;			/* Use -> */
}

int main(){


	struct person a = {"XXXX" , 25};
	struct person b = {"YYYY" , 30};
	struct person c;

	c = inc_age(a);			/* Must create a struct c and then use c = ...  */ 
	inc_age_ptr(&b);		/* Just call the function using &b  */

	printf("a: %d, b: %d, c %d\n", a.age, b.age, c.age);

	return 0;

}
