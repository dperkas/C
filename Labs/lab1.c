#include <stdio.h>

	int main()
	{
		int  A; int PR1; int PR2; int TE; int BE; int BA; int GR; //BA=attendance grade

		printf("Give me the number of your nonattendances in the labs \n");
		scanf("%d",&A);
		printf("nonattendences: %x\n",&A);
		if(A==0)
		{
			BA=10;

		}
		if(A==1)
		{
			BA=5;

		}
		if(A>=2)
		{
			BA=0;

		}

		printf("BA is %d\n", BA);

		printf("Give me your first proodos grade: \n");
		scanf("%d", &PR1);
		printf("Give me your second proodos grade: \n");
		scanf("%d", &PR2);
		printf("first proodos: %d\n",PR1);
		printf("second proodos: %d\n",PR2);

		BE=BA*(0.2) + PR1*(0.4) + PR2*(0.4);

		printf("BE is %d\n",BE);

		if(BE<4.5)
		{
			printf("Failure in labs \n");
			return 0;
		}

		printf("Give me your final test grade: \n");
		scanf("%d", &TE);

		if(TE<4.5)
		{
			printf("Failure in final exam");
			return 0;
		}

		GR= BE*(0.5) + TE*(0.5);

		printf("Success in MYY502 with grade:%d\n ", GR);


		return 0;



}
