#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
	
	int secoes = 0;
	
	scanf("%i", &secoes);
	
	int altura[secoes], contador = 0, paltura = 0, uualtura = 0, aaltura = 0, acheia = 0;
	
	for (contador = 0; contador < secoes; contador++){
	
	scanf("%i", &altura[contador]);
	paltura = altura[0];
	uualtura = altura[contador];
	
	}
	
	if(paltura < uualtura ){
		aaltura = paltura;
		
	}else if (uualtura < paltura){
		aaltura = uualtura;
		
	}else if (uualtura = paltura){
		aaltura = uualtura;
		
	}
	
	if(aaltura > 1){
		for (contador = 0; contador < secoes; contador++){
			if(aaltura > altura[contador] ){
				acheia++;
			}
		} 
	}
	
	printf("%i", acheia);
	
	
	
	
	
	
	
	
	return 0;
}
