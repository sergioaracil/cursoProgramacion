#include<stdio.h>
#include<stdlib.h>
int leerNumero()
{
    
    int num;
    char stringNum[5];
  do {  
    printf("Ingrese numero entre 1 y 3500: \n");
    scanf("%s",stringNum);
    num=atoi(stringNum); /* atoi convierte el numero ingresado como cadena en entero
    en caso de ser posible, de lo contrario retorna 0*/
    
/*Comprobar que se ha convertido correctamente en un numero entero*/
    if(num!=0) 
        printf("El numero es: %d\n",num);
    else
        printf("No es un numero\n");   
    
    
   // return num;
  }
    while ((num == 0) || (num>3500));
    return num;
}