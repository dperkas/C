#include <stdio.h>

int main(){
	char in;
	
	printf("Type a character: ");
	scanf(" %c",&in);
	
	if(in >= 'A' && in <= 'Z'){
		char lower;
		lower = in + 32;	//ASCII A:65, ASCII a:97, 97-65=32, ara kefalaio + 32 = mikro
		printf("Lowercase: %c\n",lower);
	}
	
	else if(in >= 'a' && in <='z'){
		printf("The ASCII code of the character is: %d\n",in);
		}

	else if(in >='0' && in <='9'){
		printf("Typed int: %c\n",in);
	}

	else
	{
		printf("%c\n",in);

	}


	return 0;
}	
