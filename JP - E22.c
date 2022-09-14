#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {

	float faturamento ;
	float percentual ;
	float total ;
	float parcial;
	
} Advogado ;
 

int main () {
	
	Advogado * adv = (Advogado *) malloc (sizeof (Advogado));
		
	int num = 0;
	float valor = 0.0;
	
	int maior = 0;

	float fC = 0;
	float fI = 0;
		
	do {
		
		scanf ("%i %f", &num , &valor);
		
		if (num > maior){
			maior = num ;
		}
		
		if (maior > 0) {
			adv = (Advogado *) realloc (adv, sizeof (Advogado) * (maior + 1));
		}

		if (num == 0){
			fC += valor ;	
		}
		else {
			fI += valor ;
		}
		
		if (num >= 0){
			adv[num].faturamento += valor;
		}

	} while ( num != -1);
	
	int i = 0;
	for (i = 1 ; i < (maior + 1); i++){
		
		adv[i].percentual = adv[i].faturamento / fI;

		adv[i].parcial = (adv[i].percentual * fC);

		adv[i].total = adv[i].parcial + adv[i].faturamento;

		printf ("ADVOGADO %i: %.2f + %.2f = %.2f [%.2f]\n", i , adv[i].faturamento, adv[i].parcial, adv[i].total, adv[i].percentual);
	}
	
	printf ("\nFATURAMENTO INDIVIDUAIS : %.2f", fI ) ;
	printf ("\nFATURAMENTO COMUM : %.2f" , fC) ;
	printf ("\nFATURAMENTO TOTAL : %.2f", fI + fC) ;	
	
	free (adv);

	return 0;
}
