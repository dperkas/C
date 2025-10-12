#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int n; int m; int i; int mo=0;
    srand(time(NULL));

    printf("Give me the number of elements of the array %d\n",m);
    scanf("%d", &m);

    int num = rand()%100;
    int *p = (int *) malloc(m*sizeof(int));
    if(p==NULL) exit(1);
    for(i=0; i<m; i++)
        p[i] =num;

    for(i=0; i<m; i++)
        mo += p[i];

    mo = mo/m;
    printf("%d\n",p);
    printf("%d\n",mo);  

    free (p);
    return 0;


}