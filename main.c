#include <stdio.h>
#include <stdlib.h>
#include "cabron.h"
#define CANT 5


int main()
{
    eProducto producto;
    eProveedor proveedor;


    char seguir='s';
    int opcion=0;

    printf("Bienvenido! Desea operar?\n\n\n");


    menu();
 scanf("%d",opcion);
    while(seguir=='s'){
    switch(opcion)
        {
            case 1:
                    //altaProducto(eProducto producto);

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:
                break;
            case 7:
                seguir = 'n';
                break;

    }
            return 0;
}
}

