/*
 Muestra un menú de 4 opciones pero no valida ni comprueba si la opción elegida corresponde a una de las 4
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
