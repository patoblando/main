#ifndef _PUNTOS_H_
#define _PUNTOS_H_

#include <stdbool.h>

typedef struct _Punto {
    int x;
    int y;
} Punto;

// Recibe un punto y devuelve la proyecci ón sobre el eje
// que se pida ( ’x’ o ’y ’). Cualquier otro valor debe ser
// invalidado
void proy (struct _Punto p , char eje);

#endif