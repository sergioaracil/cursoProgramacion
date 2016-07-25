
/*Antonio*/



int leerNumero()
{
    int num=0;
    char stringNum[5];
    do{
    printf("Ingrese numero entre 1 y 3500: \n");
    scanf("%s",stringNum);   
    num=atoi(stringNum); /* atoi convierte el numero ingresado como cadena en entero
    en caso de ser posible, de lo contrario retorna 0*/
    printf("El numero es: %d\n",num);
     }while ((num==0)|| num>3500);
 
     return num;
    
}
   
    