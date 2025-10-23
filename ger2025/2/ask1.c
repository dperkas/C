#include <stdio.h>

int main(){
	int letters[24]={'a','b','c','d','e','f','g','h','i','j','k'};	//ion think so...must use ascii table somehow
	int j;
	int i;
	char in;
	

	while(in != '#'){

		printf("Give a character:");
		scanf("%c",&in);




		if(in >= 'a' && in <= 'z'){
			//etsi logika
			printf("edwses mikro gramma ok\n");
		}

	

		/*
		else if(in == '#'){
	
			for(j='a'; j<='z'; j++){
				printf("%c = \n",j);	//kanei swsta print ola ta grammata(vgale to %d kai th deuterh metavlhth fores
			}
		}
		*/
		
		else{
			printf("Mporeis na dwseis mono mikro gramma!\n");
		}

		//for(int i = 0;i<='z';i++)
		//	printf("%d\n",;letters[i])
			

	}


	return 0;
}
