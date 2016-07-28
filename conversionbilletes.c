int leerNumero();/*esta declaración llama otro archivo analiza el importe*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int b1, b2, b5, b10, b20, b50, b100, b200, b500;

int main(){
    
int numero;
numero=leerNumero();
int limiteb=0; /*esta variable es la que recoge el valor del límite de billete*/

printf("Indicar el valor de billete limite :\n");
scanf("%d", &limiteb);

    if (limiteb==500) {
    
   	b500=numero/500;
        b200=numero%500/200;
        b100=numero%500%200/100;
	b50=numero%500%200%100/50;
	b20=numero%500%200%100%50/20;
	b10=numero%500%200%100%50%20/10;
	b5=numero%500%200%100%50%20%10/5;
        b2=numero%500%200%100%50%20%10%5/2;
	b1=numero%500%200%100%50%20%10%5%2;
    }
    else if (limiteb==200) {
    
        b200=numero/200;
        b100=numero%200/100;
        b50=numero%200%100/50;
        b20=numero%200%100%50/20;
        b10=numero%200%100%50%20/10;
        b5=numero%200%100%50%20%10/5;
        b2=numero%200%100%50%20%10%5/2;
        b1=numero%200%100%50%20%10%5%2;
    }
    else if (limiteb==100){
        
        b100=numero/100;
	b50=numero%100/50;
	b20=numero%100%50/20;
	b10=numero%100%50%20/10;
	b5=numero%100%50%20%10/5;
        b2=numero%100%50%20%10%5/2;
	b1=numero%100%50%20%10%5%2;
    }
    else if (limiteb==50){
            
        b50=numero/50;
	b20=numero%50/20;
	b10=numero%50%20/10;
	b5=numero%50%20%10/5;
        b2=numero%50%20%10%5/2;
        b1=numero%50%20%10%5%2;
    }
	printf("La combinacion de billetes es: \n");

        printf("de 500: %d\n", b500);
        printf("de 200: %d\n", b200);
        printf("de 100: %d\n", b100);
        printf("de 50: %d\n", b50);
        printf("de 20: %d\n", b20);
        printf("de 10: %d\n", b10);
        printf("de 5: %d\n", b5);
        printf("de 2: %d\n", b2);
        printf("de 1 %d\n", b1);
                
    return 0;
}
