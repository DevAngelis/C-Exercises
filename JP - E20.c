#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {

	int i;
	int j;
	int l;
	int c;

	scanf ("%i %i",&l, &c);
	
	if (l<0 || l>50 || c<0 || c>50){
		printf ("NAO E POSSIVEL GERAR PIRAMIDE");
	}
	else {
		
		if (l > c) 
		{ 
			for (i = (l - 1); i >= 0 ; i--)
			{
				for (j = 0; j < c; j++)
				{
					if (((l/2)<=(i+j)) && ((l/2)>=(i-j)))
					{
						printf ("[#]");
					}
					
					else
					{
						printf ("---");
					}	
				}
				printf ("\n");
			}
	
		}
		
		else if (l < c) 
		{
			for (i = (l - 1); i >= 0 ; i--)
			{
				for (j = 0; j < c; j++)
				{
					if (((c/2)<=(j+i)) && ((c/2)>=(j-i)))
					{
						printf ("[#]");
					}
					
					else
					{
						printf ("---");
					}	
				}
				printf ("\n");
			}
	
		} 
		
		else if ( ( (c <= l)&&(l != (c*2-1)) ) || ( (l <= c)&&(c != (l*2-1)) )) 
		{ 
		  printf ("NAO E POSSIVEL GERAR PIRAMIDE");
		}
	}

	return 0;
}
