#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct name{
	char* firstname;
	char* lastname;
	int  letters;
};

void getinfo(struct name* pst){
	char temp[81];

	printf("Please input first name: \n");
	fgets(temp,80, stdin);			/* Reading from stdin, which is the keyboard  */
	
	pst->firstname = (char *)malloc(strlen(temp + 1));	/* Allocating memory  */
	if(pst->firstname == NULL)
		exit(1);

	strcpy(pst->firstname,temp);		/* Copy  */


	printf("Please input last name: \n");
	fgets(temp,80, stdin);			/* Reading from stdin, which is the keyboard  */

	pst->lastname = (char *)malloc(strlen(temp + 1));	/* Allocating memory  */
	if(pst->lastname == NULL)
		exit(1);

	strcpy(pst->lastname,temp);

}

void computelen(struct name *pst){		/* Function to compute name length */

	pst->letters = strlen(pst->firstname) + strlen(pst->lastname);
}

void cleanup(struct name *pst){			/* free memory with one function */

	free(pst->firstname);
	free(pst->lastname);
}

int main(){

	struct name x;

	getinfo(&x);
	computelen(&x);
	
	printf("First name: %sLast name: %sName length: %d\n", x.firstname, x.lastname, x.letters);

	cleanup(&x);

	return 0;

}



