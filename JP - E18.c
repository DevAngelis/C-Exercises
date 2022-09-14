#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char numero[100];
    int n;
	int total = 0;
	int cont;
	int i;
	
    scanf("%d", &n);
    
    for(cont=0 ; cont < n ; cont++){
        scanf("%s", numero);
        
        for( i=0 ; i < strlen(numero) ; i++){
            	
	        if(numero[i] == '1'){
	            total+=2;
	        }
	        else if(numero[i] == '2'){
	            total+=5;
	        }
	        else if(numero[i] == '3'){
	            total+=5;
	        }
	        else if(numero[i] == '4'){
	            total+=4;
	        }
	        else if(numero[i] == '5'){
	            total+=5;
	        }
	        else if(numero[i] == '6'){
	            total+=6;
	        }
	        else if(numero[i]== '7'){
	            total+=3;
	        }
	        else if(numero[i] == '8'){
	            total+=7;
	        }
	        else if(numero[i] == '9'){
	            total+=6;
	        }
	        else if(numero[i] == '0'){
	            total+=6;
	        }
	                }
	        printf("%d leds\n",total);
	            total = 0;
    }
        
    return 0;
}
