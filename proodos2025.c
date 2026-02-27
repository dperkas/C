/*
	Na dexetai orismata sth main kai:
	1. na tupwnei posa orismata periexoun th leksh "you"
	2. na tupwnei ta orismata twn opoion o teleutaios xarakthras einai to 'n' se diaforetikh grammh

	"mhn ksexnate: 
	1.kai to ./a.out einai orisma
	2. an xrhsimopoihsete metrhtes, prepei na tous arxikopoihsete
	"
	___________________________
	(oxi akrivws etsi auto, alla kati tetoio:)
	px to "./a.out you kan your own layout "
	prepei na tupwsei:
	3
	kan
	own
	___________________________
   */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	int i,j;
	int counter = 0;
	char *target="you";


	for(i=0; i<argc; i++){		// apo i=0 evala, giati leei oti kai to ./a.out einai orisma, kai leei na tupwnei posa orismata
		if(strstr(argv[i],target) != NULL){
			counter++;
		}
	}
	printf("%d\n",counter);

	/* =========== 2 ======== */

	for(j=0; j<argc; j++){		// to idio kai edw, apo j=0
		if(argv[j][strlen(argv[j])-1] == 'n' ){
			printf("%s\n",argv[j]);
		}
	}



	return 0;
}
