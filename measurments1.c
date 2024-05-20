#include <stdio.h>
#include <stdlib.h>

int main(){

	float mv = 0;
	int i;
	int n;
	float* measurments;

	printf("Please enter the size of the matrix\n");
	scanf("%d", &n);

	measurments =(float*)malloc(n*sizeof(float));

	if(measurments == NULL)
		exit(1);
		
	printf("Please input measurments \n");

	for(i = 0; i < n; i++){
		scanf("%f", &measurments[i]);
	}

	for(i = 0; i < n; i++){
		mv +=  measurments[i];
	}

	mv = mv/n;


	free(measurments);

	printf("Mean value of measurments is %d \n", mv);

	return 0;

}


