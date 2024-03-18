#include "cabecalho.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

int caracoroa(){
    srand(time(0));
    int aleatorio = rand()%2 + 1;
    if (aleatorio == 1) {
        cout << "\n\nResultado: " << " CARA";
        return aleatorio;
    } else {
        cout << "\n\nResultado: " << " COROA";
        return aleatorio;
    }


}
