/*
===============================================================
        UNIVERSIDAD BOLIVARIANA DEL ECUADOR
             PROGRAMACIÓN ESTRUCTURADA

        PROYECTO INTEGRADOR

        Sistema de Gestión de Inventario Comercial

        Estudiante: Raúl Alvarado
===============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "inventario.h"

int main()
{
    int opcion;

    do
    {
        printf("\n=============================================\n");
        printf(" SISTEMA DE GESTION DE INVENTARIO\n");
        printf("=============================================\n");
        printf("1. Registrar producto\n");
        printf("2. Mostrar productos\n");
        printf("3. Buscar producto\n");
        printf("4. Modificar producto\n");
        printf("5. Eliminar producto\n");
        printf("6. Salir\n");
        printf("=============================================\n");

        printf("Seleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {

        case 1:
            registrarProducto();
            break;

        case 2:
            mostrarProductos();
            break;

        case 3:
            buscarProducto();
            break;

        case 4:
            modificarProducto();
            break;

        case 5:
            eliminarProducto();
            break;

        case 6:
            printf("\nGracias por utilizar el sistema.\n");
            break;

        default:
            printf("\nOpcion incorrecta.\n");

        }

        printf("\n");

    }
    while(opcion!=6);

    return 0;
}
