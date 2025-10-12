#include <stdio.h>

int main(){
	char in;
	
	printf("Give a character: \n");
	scanf(" %c",&in);
	
	if(in >= 'A' && in <= 'Z'){
		char lower;
		lower = in + 32;	//ASCII A:65, ASCII a:97, 97-65=32, ara mikro + 32 = kefalaio
		printf("Lowercase: %c\n",lower);
	}
	
	







	return 0;
}
