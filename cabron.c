#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabron.h"
#define CANT 5





int menu (){

    int opcion;

        printf("1- Alta producto\n");
        printf("2- Modificar producto\n");
        printf("3- Baja de producto\n");
        printf("4- Informar productor de mayor cantidad\n");
        printf("5- Informar productor de menor cantidad\n");
        printf("6- Listar datos\n");
        printf("7- Salir\n\n");

        printf("Opcion seleccionada: ");
        scanf("%d",&opcion);

    return opcion;

}

void altaProducto(eProducto producto[], eProveedor proveedor[], eProdprov prodprov[])
{


    int i;
    for(i=0;i<CANT;i++){

    printf("Ingresar nombre de producto: ");
    scanf("%s", producto[i].nombreprod);

    printf("Ingresar cantidad: ");
    scanf("%d", producto[i].cantidad);

    printf("Ingresar precio: ");
    scanf("%d", producto[i].precio);

    printf("Ingresar codigo de producto: ");
    scanf("%d", prodprov[i].codprov);

    printf("Ingresar proveedor: ");
    scanf("%s", prodprov[i].codprov);




        }return 0;


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


}

void bajaProducto(eProducto producto[], eProveedor proveedor[], eProdprov prodprov[])
{

    int i;
    int j;
    int codprodAux;

    printf("\nIngresar codigo de producto:");
    scanf("%d", &codprodAux );
    for(i=0; i<CANT; i++)
    {
        if(prodprov[i].codproducto==codprodAux)
        {
            producto=0;
            prodprov=0;
            proveedor=0;



        }
    }

}

