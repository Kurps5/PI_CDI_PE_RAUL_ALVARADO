#include "validaciones.h"

int validarEntero(int numero)
{
    if (numero >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int validarPrecio(float precio)
{
    if (precio >= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
