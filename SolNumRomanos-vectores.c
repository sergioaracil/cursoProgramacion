/*Se crea funcion llamada leerNumero para que lea el numero en forma de texto y lo valide*/

int leerNumero();

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Biblioteca utilizada por la funcion isdigit dentro de la funcion validarEntrada */
int main()
{    
    int N;
    const char *Unidad[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    const char *Decena[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const char *Centena[]= {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const char *Millar[]={"", "M", "MM", "MMM"};
    
    N=leerNumero();
    int u=N%10;
    int d=(N/10)%10;
    int c=(N/100)%10;
    int m=(N/1000);
    
    if(N>=1000){
        printf("%s%s%s%s",Millar[m],Centena[c],Decena[d],Unidad[u]);
    }else{
        if(N>=100){
            printf("%s%s%s",Centena[c],Decena[d],Unidad[u]);
        }else{
            if(N>=10){
                printf("%s%s",Decena[d],Unidad[u]);
            }else{
                printf("%s",Unidad[N]);
            }
        }
    }
    return 0;
}
