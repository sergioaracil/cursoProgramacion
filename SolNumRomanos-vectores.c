/*Se crea funcion llamada leerNumero para que lea el numero en forma de texto y lo valide*/
int leerNumero();

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int r,digito;
    
r=leerNumero();
printf("\nEl numero %d en ROMANOS es ",r);
digito=r/1000;
r=r%1000;
cambiarRom(digito,'M',' ',' ');
digito=r/100;
r=r%100;
cambiarRom(digito,'C','D','M');
digito=r/10;
r=r%10;
cambiarRom(digito,'X','L','C');
digito=r;
cambiarRom(digito,'I','V','X');

printf("\n\n");
       
return (0);
}

void cambiarRom(int digito, char v1,char v2,char v3)
{
int j;

if(digito==9){
printf("%c%c",v1,v3);
}
else{
if(digito>4){
printf("%c",v2);
for(j=1;j<=digito-5;j++){
printf("%c",v1);
}
}
else{
if(digito==4){
printf("%c%c",v1,v2);
}
else{
for(j=1;j<=digito;j++){
printf("%c",v1);
}
}
}
}
}
