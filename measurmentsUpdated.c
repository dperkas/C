/*
 *
 *Like measurments1.c, but the numer of experiments M is asked
 *by the user to input
 *
 * float** measurments is like a 2d array. Using double cast (float **) for M
 * to malloc the number M of experiments
 *
 *
 */


#include <stdio.h>
#include <stdlib.h>


void show_array(int r, int c, float* arr[]){
	int i;
	int j;

	for(i = 0; i <r ; i++)
		for (j = 0; j < c; j++)
			printf("%f\n", arr[i][j]);
			printf("\n");
}


int main(){

	int i;
	int j;
	float mv = 0.0;
	int M;		/*Number of experiments*/
	int n;		/*Number of measurments*/
	float** measurments;

	printf("Input the number of experiments \n");
	scanf("%d",&M);

	printf("Input the number of measurments \n");
	scanf("%d", &n);


	measurments = (float **)malloc( M*sizeof(float *));
	if(measurments == NULL)
		exit(1);	

	for(i = 0; i < M; i++){
		measurments[i] = (float *)malloc(n*sizeof(float));
		if(measurments[i] == NULL)
			exit(1);
	}
	
	show_array(M, n, measurments);

	for(i = 0; i < M; i++)
		for(j = 0; j < n; j++)
			scanf("%f", &measurments[i][j]);

	for(i = 0; i < M; i++)
		for(j = 0; j < n; j++)
			mv =+ measurments[i][j];

	mv = mv/n;

	printf("Mean value = %f\n" , mv);

	for(i = 0; i < M; i++)
		free(measurments[i]);
	
	free(measurments);




	return 0;
}


