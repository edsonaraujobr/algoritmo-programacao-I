#include "cabecalho.h"

int lancamentos(int jogador01,int jogador02) {
    int resultado = caracoroa();
    if(jogador01 == resultado) {
        return 1;
    } else {
        return 2;
    }
}
