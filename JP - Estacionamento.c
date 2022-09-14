#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int horaDeEntrada;
	int minDeEntrada;
	int horaDeSaida;
	int minDeSaida;
	
	scanf("%i:%i", &horaDeEntrada, &minDeEntrada);
	scanf("%i:%i", &horaDeSaida, &minDeSaida);
	
	int entrada = horaDeEntrada*60 + minDeEntrada;
	int saida = horaDeSaida*60 + minDeSaida;
	
	int tempoxMinuto;
	float TempoXHora = 0.00;
	
	tempoxMinuto = saida - entrada;
	TempoXHora = ceil(tempoxMinuto/60);
	float total = 0.00;
	
	
	if (TempoXHora >=2){
		float valor = TempoXHora*1;
		printf ("TOTAL A PAGAR: %2.f", valor);
	}
	else if (TempoXHora > 2 && TempoXHora <= 4){
		float valor = TempoXHora*1.4;
		printf ("TOTAL A PAGAR: %2.f", valor);
	}
	else if (TempoXHora > 4){
		float valor = TempoXHora*2;
		printf ("TOTAL A PAGAR: %2.f", valor);
	}
	
	
	
	
	return 0;
}
