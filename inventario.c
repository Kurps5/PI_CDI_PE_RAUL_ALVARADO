#include <stdio.h>
#include <string.h>
#include "inventario.h"

#define MAX_PRODUCTOS 100

Producto productos[MAX_PRODUCTOS];
int totalProductos = 0;

void registrarProducto()
{
    if(totalProductos >= MAX_PRODUCTOS)
    {
        printf("\nNo hay espacio para mas productos.\n");
        return;
    }

    printf("\n===== REGISTRAR PRODUCTO =====\n");

    printf("Codigo: ");
    scanf("%d", &productos[totalProductos].codigo);

    printf("Nombre: ");
    scanf(" %49[^\n]", productos[totalProductos].nombre);

    printf("Categoria: ");
    scanf(" %39[^\n]", productos[totalProductos].categoria);

    printf("Cantidad: ");
    scanf("%d", &productos[totalProductos].cantidad);

    printf("Precio: ");
    scanf("%f", &productos[totalProductos].precio);

    totalProductos++;

    printf("\nProducto registrado correctamente.\n");
}

void mostrarProductos()
{
    int i;

    if(totalProductos == 0)
    {
        printf("\nNo existen productos registrados.\n");
        return;
    }

    printf("\n========== INVENTARIO ==========\n");

    for(i = 0; i < totalProductos; i++)
    {
        printf("\nProducto %d\n", i + 1);
        printf("Codigo    : %d\n", productos[i].codigo);
        printf("Nombre    : %s\n", productos[i].nombre);
        printf("Categoria : %s\n", productos[i].categoria);
        printf("Cantidad  : %d\n", productos[i].cantidad);
        printf("Precio    : %.2f\n", productos[i].precio);
    }
}

void buscarProducto()
{
    int codigo;
    int i;

    printf("\nIngrese el codigo a buscar: ");
    scanf("%d", &codigo);

    for(i = 0; i < totalProductos; i++)
    {
        if(productos[i].codigo == codigo)
        {
            printf("\nProducto encontrado\n");
            printf("Nombre: %s\n", productos[i].nombre);
            printf("Categoria: %s\n", productos[i].categoria);
            printf("Cantidad: %d\n", productos[i].cantidad);
            printf("Precio: %.2f\n", productos[i].precio);
            return;
        }
    }

    printf("\nProducto no encontrado.\n");
}

void modificarProducto()
{
    int codigo;
    int i;

    printf("\nIngrese el codigo del producto: ");
    scanf("%d", &codigo);

    for(i = 0; i < totalProductos; i++)
    {
        if(productos[i].codigo == codigo)
        {
            printf("Nuevo nombre: ");
            scanf(" %49[^\n]", productos[i].nombre);

            printf("Nueva categoria: ");
            scanf(" %39[^\n]", productos[i].categoria);

            printf("Nueva cantidad: ");
            scanf("%d", &productos[i].cantidad);

            printf("Nuevo precio: ");
            scanf("%f", &productos[i].precio);

            printf("\nProducto actualizado correctamente.\n");
            return;
        }
    }

    printf("\nProducto no encontrado.\n");
}

void eliminarProducto()
{
    int codigo;
    int i;
    int j;

    printf("\nIngrese el codigo del producto a eliminar: ");
    scanf("%d", &codigo);

    for(i = 0; i < totalProductos; i++)
    {
        if(productos[i].codigo == codigo)
        {
            for(j = i; j < totalProductos - 1; j++)
            {
                productos[j] = productos[j + 1];
            }

            totalProductos--;

            printf("\nProducto eliminado correctamente.\n");
            return;
        }
    }

    printf("\nProducto no encontrado.\n");
}
