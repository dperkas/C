#include <stdio.h>
#include <stdlib.h>


int main(){

	int n;
	int i;
	int *measurments;

	scanf("%d",&n);

	measurments = (int*)malloc(n*sizeof(int));

	if(measurments == NULL)
		exit(1);

	for(i=0; i<n; i++)
		scanf("%d",&measurments[i]);

	for(i=0; i<n; i++)
		printf("%d\n", measurments[i]);

	free(measurments);

	return 0;
}
