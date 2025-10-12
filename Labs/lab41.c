#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int n; int m; int i; int mo=0;
    int *p[m];
    srand(time(NULL));

    printf("Give me the number of elements of the array %d",m);
    scanf("%d", &m);

    int num = rand()%100;
    p[i] = (int *) malloc(m*sizeof(int));
    if(p[i]==NULL) exit(1);
    for(i=0; i<m; i++)
        p[i] =num;

    for(i=0; i<m; i++)
        mo += p[i];

    mo = mo/m;
    printf("%d",&p[i]);
    printf("%f",mo);

    for(i=0; i<m; i++)
        free (p[i]);
    return 0;


}