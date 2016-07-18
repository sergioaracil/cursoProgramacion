/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
int main7()
{
   char nombre[20]="";
    char eleccion;
    printf("Elige el numero en el menu:\n\n" );
    printf( "1 - Cargar fichero\n2 - Guardar en un fichero\n3 - Otras operaciones\n4 - Mostrar datos\n0 - Salir\n\n");
    printf( "Opcion: " );
    eleccion=getchar();
    printf( "\nHas elegido: %c", eleccion );
    printf( "\nPulse una tecla para continuar %c", getchar() );
    getchar(); /*Esta escrito dos veces seguidas para hacer una pausa antes de finalizar*/
    return 0;
}
