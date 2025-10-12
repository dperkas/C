#include <stdio.h>

int main(){
    int var=20;                                         /*actual variable decleration*/
    int * ip;                                            /*pointer variable decleration*/

    ip=&var;                                           /*store adress of var in pointer ip*/
    printf("Address of var variable: %p\n", &var);
    printf("Address stored in ip variable: %p\n", ip);
    printf("Value of  *ip variable : %d\n", *ip);
    printf("Value of variable var : %d\n",var);
    printf("&ip : %p\n", &ip);
    printf("&ip : %p\n", &ip);

    printf("changed");



    
    
     return 0;
}