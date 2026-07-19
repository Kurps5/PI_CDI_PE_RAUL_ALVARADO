#ifndef INVENTARIO_H
#define INVENTARIO_H

#define MAX_NOMBRE 50
#define MAX_CATEGORIA 40

typedef struct
{
    int codigo;
    char nombre[MAX_NOMBRE];
    char categoria[MAX_CATEGORIA];
    int cantidad;
    float precio;

} Producto;

void registrarProducto();
void mostrarProductos();
void buscarProducto();
void modificarProducto();
void eliminarProducto();

#endif
