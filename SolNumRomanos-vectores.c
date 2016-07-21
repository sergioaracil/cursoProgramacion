int leerNumero();

#include <stdio.h>
#include <stdlib.h>
int main()
{
int N;
const char *Unidad[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
const char *Decena[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
const char *Centena[]= {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
const char *UnidadMillar[]= {"", "M", "MM", "MMM"};

N=leerNumero();

int u=N%10;
int d=(N/10)%10;
int c=(N/100)%10;
int um=(N/1000)%10;

    if(N>=1000){
    printf("%s%s%s%s",UnidadMillar[um],Centena[c],Decena[d],Unidad[u]);
    
    }else{

    if(N>=100){
    printf("%s%s%s",Centena[c],Decena[d],Unidad[u]);
  
    }else{    
   
    if(N>=10){
        printf("%s%s",Centena[c],Decena[d]);
    
   }else{
        printf("%s",Unidad[u]);
    }
  }
 }
return 0;

}
