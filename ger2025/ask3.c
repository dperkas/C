#include <stdio.h>



int main(){
	int A;
	float PR1, PR2;
	float TE;
	float BE;
	float GR;
	int neos=1;	//neos = 1 ->neos foithths. vale neos = 0 gia palaio foithth.

	
	printf("PR1 grade: ");
	scanf(" %f",&PR1);

	printf("PR2 grade: ");
	scanf(" %f",&PR2);

	
	/* Lab Grade(BE) */

	if(neos==1){
		printf("Number of abcenses: ");
		scanf(" %d",&A);

		if(A==0){
			BE = 10*(0.5) + PR1*(0.4) + PR2*(0.4);
		}
		else if(A==1){
			BE = 5*(0.5) + PR1*(0.4) + PR2*(0.4);
		}
		else if(A >=2){
			BE = 0*(0.5) + PR1*(0.4) + PR2*(0.4);
		}	
	}
	else if(neos=0){	//palios
		BE = 0.5*PR1 + 0.5*PR2;
	}
	printf("Lab grade: %f\n", BE);

	printf("Final exams grade: ");
	scanf(" %f", &TE);

	/* Final Grade(GR) */
	if(BE < 4.5){
		printf("Lab failed. Θα μετρήσει 50%% στον τελικό βαθμό\n");
		GR = BE*(0.5) + TE*(0.5);
	}
	else{
		printf("Lab success. Θα μετρήσει 75%% στον τελικό βαθμό\n");
		GR = BE*(0.75) + TE*(0.25);
	}
	
	if(GR < 4.5){
		printf("Failed MYY502\n");
	}
	else{
		printf("Success in MYY502 with grade %f\n",GR); 
	}

	return 0;
}
