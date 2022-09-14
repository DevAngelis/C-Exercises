#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int a = 0;
	int b = 0;
	int resultado0 = 0;
	int resultado1 = 0;
	char chapas[2];
	
	FILE *fp;
	fp = fopen("votos.dat", "w");
	
	if(fp == NULL){
		exit(1);
	}
	else{
		
		fprintf(fp, "TOTAL DA CHAPA 'A': %i\n", a);
		
		fprintf(fp, "TOTAL DA CHAPA 'B': %i\n", b);
	}
	
	fclose(fp);
	
	
	do{
		scanf("%s", &chapas);
		
		
		if(chapas[0] == 'A'){
			a++;
		} else if(chapas[0] == 'B'){
			b++;
		}
		
	}while((chapas[0] == 'A') || (chapas[0] == 'B'));


	printf("TOTAL DA CHAPA 'A': %i\n", a);
	printf("TOTAL DA CHAPA 'B': %i\n", b);
	

	return 0;
}

