
int leerNumero()
{
    
    int num;
    char stringNum[5];
    do{
        printf("Ingrese numero entre 1 y 3500: \n");
        scanf("%s",stringNum);
    num=atoi(stringNum); /* atoi convierte el numero ingresado como cadena en entero
    en caso de ser posible, de lo contrario retorna 0*/
    
    }while(num<=0 || num>3500 || validarEntrada(stringNum)!=0);
        
    
    if(num!=0) 
        printf("El numero a convertir en Romano es: %d\n",num);
    else
        printf("No es un numero\n");   
    
    
    return num;
    
}

/*Validar la entrada, si la cadena entrada es un numero devuelve cero sino 1*/
int validarEntrada(char nom[]) 
{ 
int i = 0; 
int valido = 0;// incializo la variable...es necesario. 
int numCarac = strlen(nom); 

for( i = 0; i < numCarac; i++) 
{ 
if(isdigit(nom[i])) 
{ 
continue; 
valido = 0; 
} 
else 
{ 
valido = 1;
} 
break;
} 

return valido; 
} 