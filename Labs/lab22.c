#include <stdio.h>

int* search(int a[],int size,int x)
{
    int i;
    int *p=&x;
    int flag;
    flag = 0;
    for(i = 0; i < size; i++)
   	{
   		if(a[i] == x)
     	{
       		flag = 1;
       		break;
	 	}   
   	}

     if(flag==1){
         return p;
     }
     else{
         return NULL;
     }
}
