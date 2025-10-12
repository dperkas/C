#include <stdio.h>

int main(){
	int a,b,c;
	float mo;

	printf("Dwse treis akeraious arithmous:\n");
	scanf("%d%d%d", &a,&b,&c);

	mo = (a+b+c)/3;

	printf("O mesos oros einai: %f\n ", mo);
	
	if(mo<10){
		printf("O mesos oros einai <10\n");
	}
	else if(mo >=10){
		printf("O mesos oros einai >=10\n");
	}
		

	return 0;
}
