#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int dias = 0, contador = 0;
	
	scanf("%i", &dias);
	//desclarando os vetores depois de dar um valor para a variavel dias para que o tamanho do vetor seja sempre o valor de dias
	int litros[dias], totalLitros = 0;
	float valorG[dias], valorA[dias], valorAPagar[dias], totalGasto = 0, media = 0;
	
	do{
		scanf("%i %f %f", &litros[contador], &valorG[contador], &valorA[contador]);//calculando qual combustivel é mais viavel
		
		if((valorA[contador] * 0.70) <= valorG[contador]){
			valorAPagar[contador] = valorA[contador] * litros[contador];
			totalLitros += litros[contador];
			totalGasto += valorAPagar[contador];
		}else{
			valorAPagar[contador] = valorG[contador] * litros[contador];
			totalLitros += litros[contador];
			totalGasto += valorAPagar[contador];
		}
		
		contador++;
	}while(contador < dias);
	
	media = totalGasto / dias;
	
	printf("TOTAL DE LITROS: %i -- TOTAL GASTOS: %.2f -- MEDIA: %.2f\n", totalLitros, totalGasto, media);
	
	contador = 0;//fazendo o contador resetar
	
	do{
		printf("LITROS: %i --> VALOR PAGO: %.2f\n", litros[contador], valorAPagar[contador]);
		contador++;
	}while(contador < dias);
	
	return 0;
}
