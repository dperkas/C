#include <stdio.h>

int main(void)
{
	char chr, small;
	int i, pos, given_letts = 0, given_digs = 0;
	int nums[30];

	do
	{
		printf("Dwste charaktira: ");
		scanf(" %c", &chr);

		/* Elegxoume an einai kefalaio gramma */
		if (chr >= 'A' && chr <= 'Z')
		{
			/* Gia na paroume to mikro enos kefalaiou grammatos arkei
			 * na vroume ti thesi toy sto alfavito (- 'A') kai na tin prosthetoume
			 * sto mikro 'a'.
			 */
			small = (chr - 'A') + 'a';
			printf("To mikro tou '%c' einai '%c'\n", chr, small);
		}
		/* Elegxoume an einai mikro gramma */
		else if (chr >= 'a' && chr <= 'z')
		{
			/* Gia na vroume tin thesi tou sto alfavito afairoume ton
			 * ASCII tou "a", wste na vroume tin apostasi tou apo ton
			 * charaktira a kai sti synexeia prosthetoume 1 giati px.
			 * to a einai o prwtos kai oxi o midenikos xaraktiras.
			 */
			pos = (chr - 'a') + 1;
			printf("To '%c' einai to %do gramma tou agglikou alfavitou\n", chr, pos);
		}
		/* Elegxoume an einai noumero */
		else if (chr >= '0' && chr <= '9')
		{
			/* Sthn periptwsi pou einai noumero tote apothikeuoume ston
			 * pinaka nums tin aksia pou tha eixe an itan akeraios.
			 * Gia na vroume tin aksia tou arkei na afairesoume ton
			 * kwdiko ASCII tou xaraktira 0 (dhl. to '0').
			 */
			nums[given_digs++] = chr - '0';
		}
		/* Otidipote allo to ektypwnoume ws exei */
		else
		{
			printf("Dwsate ton charactira '%c'\n", chr);
		}

		given_letts++;

	}
	while (chr != '$' && given_letts < 30);

	printf("Arithmoi: ");
	for(i=0; i<given_digs; i++)
		printf("%d ", nums[i]);
	printf("\n");

	return 0;
}