int leerNumero();

#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    
    
    int N;
    const char *Unidad[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    const char *Decena[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const char *Centena[]= {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    
    
    N=leerNumero();
    int u=N%10;
    int d=(N/10)%10;
    int c=N/100;

      if(N>=100){
          printf("%s%s%s",Centena[c],Decena[d],Unidad[u]);
      }else{
          if(N>=10){
              printf("%s%s",Decena[d],Unidad[u]);
          }else{
              printf("%s",Unidad[N]);
          }
      }
    return 0;
}
