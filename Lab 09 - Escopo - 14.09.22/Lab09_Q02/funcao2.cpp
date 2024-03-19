#include "cabecalho.h"

int somadivisores (int x1)
{
    int soma = 0, y;
    for (int y=(x1/2);y!=0; y--) {
        if ( edivisor (x1,y)) {
            soma = soma + y;
        }
    }
    return soma;
}
