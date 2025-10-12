#include <stdio.h>

int main(){

int a[10] = {0,2,4,6,8,7,6,4,2,0};
int *pa = &a[1], *pb = &a[8], *pc = &a[0];

printf("1. *(a+5) = %d\n", *(a+5));
printf("2. pb - pa = %ld\n", pb - pa);
printf("2. pb= %p\n", pb);
printf("2. pa = %p\n", pa);
printf("3. pb[1] = %d\n", pb[1]);
printf("4. pb[0] = %d\n", pb[0]);         //For pointers better use %p, not %d
printf("5. pa[2] = %d\n", pa[2]);
printf("6. &pa[3] = %p\n", &pa[3]);
printf("6. &a[4] = %p\n", &a[4]);

printf("7. a[0] = %d\n", pc[0]);


/*printf("4N. pb[1] = %d\n", pb[1]);    
printf("4NN. a[8]  = %d\n", a[8]);
printf("5N.*pa += 3 = %d\n", *pa +=3);
printf("6N. *(pb -= 3) = %d\n", *(pb -= 3));
*/


return 0;

}
