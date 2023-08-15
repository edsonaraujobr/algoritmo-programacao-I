#include <iostream>
using namespace std;
#include <cmath>
float raizquadrada (float);

int main ()
{
    setlocale (LC_ALL,"portuguese");
    float a,y,x;

    cout << "Digite um número real: " << endl;
    cin >> a;
    y = raizquadrada (a);
    cout << "O número " << a << " após a função raiz quadrada é: " << y << endl;
    x = y*y;
    cout << "O número " << y << " ao quadrado é: " << x << endl;
}

float raizquadrada (float x)
{
    return sqrt(x);
}
