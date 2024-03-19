#include <iostream>
using namespace std;
void recursiva (int,int);

/*
 Faça uma função recursiva que calcule o m.d.c. pelo algoritmo de Euclides. Por exemplo, divide-se a
por b e obtém-se o quociente q e o resto r. Se r for zero, b é o m.d.c; se não for, divide-se b por r e 
assim sucessivamente até encontrar um resto zero. O último divisor é o m.d.c. Teste a função 
chamando-a a partir de main. */

int main ()
{
    setlocale (LC_ALL,"portuguese");
    int a,b;
    cout << "Digite dois números inteiros: " << endl;
    cin >> a >> b;
    cout << "O m.d.c é: ";
    recursiva (a,b);
}

void recursiva (int a,int b)
{
    int r;
    if (a%b==0)
        cout << b;
    else {
        r = a%b;
        return recursiva (b,r);
    }
}
