#include <iostream>
#include "cabecalho.h"
using namespace std;

int edivisor (int& a , int& b)
{
    setlocale (LC_ALL, "portuguese");
    static int x = 1;
    cout << "A função foi chamada pela " << x << " vez" << endl;
    ++x;
    if (a%b==0) {
        return 1;
    }
    else {
        return 0;
    }
}
