#include <stdio.h>
#include <stdlib.h>
#include "cabron.h"
#define CANT 5





int menu (){

    int opcion;

    {

        printf("1- Alta producto\n");
        printf("2- Modificar producto\n");
        printf("3- Baja de producto\n");
        printf("4- Informar productor de mayor cantidad\n");
        printf("5- Informar productor de menor cantidad\n");
        printf("6- Listar datos\n");
        printf("7- Salir\n\n");

        printf("Opcion seleccionada: ");
        scanf("%d",&opcion);

        }

void altaProducto(eProducto producto[])
{
    int i;
    printf("Ingresar nombre de producto: ");
    scanf("%d",producto[i].nombreprod);

    printf(producto[i].nombreprod);

}

void validarMenu(int menu)
{
    char opcion[15];
    int i, flag=0, cant;

    printf("Ingrese la opcion deseada: ");
    scanf("%s", opcion);

    cant = strlen(opcion);

    for(i=0; i<cant; i++){
        if(!isdigit(opcion[i])){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("\nNo es un numero");

    }
    else{
        printf("\nEs un numero");
    }

    return 0;
}
}



