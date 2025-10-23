#include <stdio.h>

int main(){
	int j;
	int i;
	char in;
	int array[26] = {0};
	

	while(in != '#'){

		printf("Give a character:");
		scanf(" %c",&in);


		if(in >= 'a' && in <= 'z'){
			printf("edwses mikro gramma ok\n");
			array[in- 'a']++;
		}
		

		else if(in == '#'){
			printf("Poses fores emfanishthke o kathe xarakthras:\n");
			for(j=0;j<26;j++){
				printf("%c = %d\n", 'a'+j, array[j]);
			}
		}

		else{
			printf("Mporeis na dwseis mono mikro gramma!\n");
		}
	}	
	
	
	return 0;
}
