#include <iostream>
using namespace std;
#include "cabecalho.h"

int main()
{
    setlocale (LC_ALL, "portuguese");
    int a1,a2,a3,a4; float b1,b2,b3; double c1,c2;
    cout << "Digite quatro valores inteiros:" << endl;
    cin >> a1 >> a2 >> a3 >> a4;
    cout << "A media retornada pela fun��o entre os valores inteiros �: " << media (a1,a2,a3,a4) << endl;
    cout << endl;

    cout << "Digite tr�s valores reais:" << endl;
    cin >> b1 >> b2 >> b3;
    cout << "A media retornada pela fun��o entre os valores reais �: " << media (b1,b2,b3) << endl;
    cout << endl;

    cout << "Digite dois valores doubles:" << endl;
    cin >> c1 >> c2;
    cout << "A media retornada pela fun��o entre os valores doubles �: " << media (c1,c2) << endl;
    return 0;
}
