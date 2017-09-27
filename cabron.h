#include <stdio.h>
#include <stdlib.h>


typedef struct{

int nombreprod;
char descriprod[51];
int cantidad;
int precio;
}eProducto;

typedef struct {

char descriprov[51];
}eProveedor;

typedef struct {
int codproducto;
int codprov;
}eProdprov;

int menu();

void altaProducto(eProducto producto[], eProveedor proveedor[], eProdprov prodprov[]);

void bajaProducto(eProducto producto[], eProveedor proveedor[], eProdprov prodprov[]);




