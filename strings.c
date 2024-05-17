#include <stdio.h>

int main(){

	char q[] = "first";
	char r[16] = { 'S', 'e', 'c', 'o', 'n', 'd', '\0'};
	char s[16] = "Thrird";
	char *w;

	w = "At pointer";
	
	printf("Printing q: %s\n",q);
	printf("Printing r: %s\n",r);
	printf("Printing s: %s\n",s);
	printf("Printing w: %s\n",w);
	printf("Printing *w: %p\n",&q);

	return 0;
}
