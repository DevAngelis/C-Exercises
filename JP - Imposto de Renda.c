#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal,impostoR; //variaveis
    
    scanf("%f", &sal);
    if(sal <= 2000.0) {
        printf("Isento\n");
    }
    else if(sal <= 3000.0 ){
        impostoR = (sal - 2000.0)*0.08;
        printf("R$ %.2f\n", impostoR);
    }
    else if( sal <= 4500.0){
        impostoR = (sal - 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2f\n", impostoR);
    }
    else {
        impostoR = (sal - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2f\n", impostoR);
    }
    return 0;
}
