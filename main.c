#include "cabecera.h"

int main(void)
{
    articulos_t articulos[CANT_ARTICULOS] = {0};
    printf("Bienvendio al final de Info 1\n\n");

    /*CARGA de las fichas*/
    cargarProducto(articulos); 
    /* Impresion de fichas cargadas*/
    impresionFichas(articulos);
    /* Ordenamiento */
    ordenamiento(articulos);
    /* Impresion final*/
    impresionFinal(articulos);

    return 0;
}