typedef struct producto{

int nombreprod;
int codprod;
char descriprod[51];
int cantidad;
int precio;
}eProducto;

typedef struct proveedor{

int codprov;
char descriprov[50];
}eProveedor;

int menu();

void altaProducto(eProducto);


