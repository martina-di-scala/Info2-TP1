#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CANT_ARTICULOS 60

#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

typedef struct {
    char descripcion[90];
    int cantidad_sucursal[3]; // sucursal 1 2 3    
    int total;
}articulos_t;

/**
 * @function cargarProducto
 * @abstract permite cargar datos de articulos en cada sucursal
 * @param articulos
 * @return void
 */
void cargarProducto(articulos_t articulos[]);

/**
 * @function impresionFichas
 * @abstract muestra los datos cargados por sucursal de cada articulo
 * @param articulos
 * @return void
 */
void impresionFichas(articulos_t articulos[]);

/**
 * @function ordenamiento
 * @abstract permite ordenar de mayor a menor la cantidad total de cada articulo
 * @param articulos
 * @return void
 */
void ordenamiento(articulos_t articulos[]);

/**
 * @function impresionFinal
 * @abstract muestra los datos cargados por sucursal de cada articulo ordenados de mayor a menor según el total
 * @param articulos
 * @return void
 */
void impresionFinal(articulos_t articulos[]);
